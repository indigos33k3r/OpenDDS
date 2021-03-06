/*
 * Distributed under the OpenDDS License.
 * See: http://www.OpenDDS.org/license.html
 */

#include "gtest/gtest.h"
#include "dds/DCPS/security/SSL/Utils.h"

TEST(UtilsTest, MakeNonce256_Success)
{
  std::vector<unsigned char> nonce;
  int err = OpenDDS::Security::SSL::make_nonce_256(nonce);
  ASSERT_EQ(0, err);
}
