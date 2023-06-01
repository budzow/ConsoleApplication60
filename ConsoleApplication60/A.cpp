#include "A.h"

const CString logdataDir = _T("c:\\logdata");
const CString logdataPath = logdataDir + _T("\\");

void A::TestFunc(const CString& dir, const CString& outputFile) {
	CString filename(logdataPath + outputFile + dir);
}