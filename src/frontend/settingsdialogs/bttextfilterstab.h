/*********
*
* In the name of the Father, and of the Son, and of the Holy Spirit.
*
* This file is part of BibleTime's source code, http://www.bibletime.info/.
*
* Copyright 1999-2018 by the BibleTime developers.
* The BibleTime source code is licensed under the GNU General Public License
* version 2.0.
*
**********/

#ifndef BTTEXTFILTERSTAB_H
#define BTTEXTFILTERSTAB_H

#include <QWidget>

class CSwordSettingsPage;
class QCheckBox;
class QLabel;


class BtTextFiltersTab: public QWidget {

    Q_OBJECT

    public: /* Methods: */

        BtTextFiltersTab(CSwordSettingsPage * parent);

        void save();

    protected: /* Methods: */

        void retranslateUi();

    private: /* Fields: */

        QLabel * m_explanationLabel;

#define TEXT_FILTERS_TAB_FIELD(name) QCheckBox * m_ ## name ## Check

        TEXT_FILTERS_TAB_FIELD(verseNumbers);
        TEXT_FILTERS_TAB_FIELD(headings);
        TEXT_FILTERS_TAB_FIELD(hebrewPoints);
        TEXT_FILTERS_TAB_FIELD(hebrewCantillation);
        TEXT_FILTERS_TAB_FIELD(morphSegmentation);
        TEXT_FILTERS_TAB_FIELD(greekAccents);
        TEXT_FILTERS_TAB_FIELD(textualVariants);
        TEXT_FILTERS_TAB_FIELD(scriptureReferences);

};

#endif /* BTTEXTFILTERSTAB_H */
