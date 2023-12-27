#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHStandardGroups)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHStandardGroups;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups);
// Type: Org.BouncyCastle.Crypto.Agreement::DHStandardGroups
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(735))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::DHStandardGroups*
class CORDL_TYPE DHStandardGroups : public ::System::Object {
public:
  // Declarations
  /// @brief Field Two, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Two, put = setStaticF_Two))::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field rfc2409_768_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc2409_768_p, put = setStaticF_rfc2409_768_p))::StringW rfc2409_768_p;

  /// @brief Field rfc2409_768, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc2409_768, put = setStaticF_rfc2409_768))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc2409_768;

  /// @brief Field rfc2409_1024_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc2409_1024_p, put = setStaticF_rfc2409_1024_p))::StringW rfc2409_1024_p;

  /// @brief Field rfc2409_1024, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc2409_1024, put = setStaticF_rfc2409_1024))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc2409_1024;

  /// @brief Field rfc3526_1536_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_1536_p, put = setStaticF_rfc3526_1536_p))::StringW rfc3526_1536_p;

  /// @brief Field rfc3526_1536_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc3526_1536_l, put = setStaticF_rfc3526_1536_l)) int32_t rfc3526_1536_l;

  /// @brief Field rfc3526_1536, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_1536, put = setStaticF_rfc3526_1536))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_1536;

  /// @brief Field rfc3526_2048_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_2048_p, put = setStaticF_rfc3526_2048_p))::StringW rfc3526_2048_p;

  /// @brief Field rfc3526_2048_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc3526_2048_l, put = setStaticF_rfc3526_2048_l)) int32_t rfc3526_2048_l;

  /// @brief Field rfc3526_2048, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_2048, put = setStaticF_rfc3526_2048))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_2048;

  /// @brief Field rfc3526_3072_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_3072_p, put = setStaticF_rfc3526_3072_p))::StringW rfc3526_3072_p;

  /// @brief Field rfc3526_3072_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc3526_3072_l, put = setStaticF_rfc3526_3072_l)) int32_t rfc3526_3072_l;

  /// @brief Field rfc3526_3072, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_3072, put = setStaticF_rfc3526_3072))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_3072;

  /// @brief Field rfc3526_4096_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_4096_p, put = setStaticF_rfc3526_4096_p))::StringW rfc3526_4096_p;

  /// @brief Field rfc3526_4096_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc3526_4096_l, put = setStaticF_rfc3526_4096_l)) int32_t rfc3526_4096_l;

  /// @brief Field rfc3526_4096, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_4096, put = setStaticF_rfc3526_4096))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_4096;

  /// @brief Field rfc3526_6144_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_6144_p, put = setStaticF_rfc3526_6144_p))::StringW rfc3526_6144_p;

  /// @brief Field rfc3526_6144_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc3526_6144_l, put = setStaticF_rfc3526_6144_l)) int32_t rfc3526_6144_l;

  /// @brief Field rfc3526_6144, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_6144, put = setStaticF_rfc3526_6144))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_6144;

  /// @brief Field rfc3526_8192_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_8192_p, put = setStaticF_rfc3526_8192_p))::StringW rfc3526_8192_p;

  /// @brief Field rfc3526_8192_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc3526_8192_l, put = setStaticF_rfc3526_8192_l)) int32_t rfc3526_8192_l;

  /// @brief Field rfc3526_8192, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc3526_8192, put = setStaticF_rfc3526_8192))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc3526_8192;

  /// @brief Field rfc4306_768, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc4306_768, put = setStaticF_rfc4306_768))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc4306_768;

  /// @brief Field rfc4306_1024, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc4306_1024, put = setStaticF_rfc4306_1024))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc4306_1024;

  /// @brief Field rfc5996_768, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc5996_768, put = setStaticF_rfc5996_768))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5996_768;

  /// @brief Field rfc5996_1024, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc5996_1024, put = setStaticF_rfc5996_1024))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc5996_1024;

  /// @brief Field rfc7919_ffdhe2048_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe2048_p, put = setStaticF_rfc7919_ffdhe2048_p))::StringW rfc7919_ffdhe2048_p;

  /// @brief Field rfc7919_ffdhe2048_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc7919_ffdhe2048_l, put = setStaticF_rfc7919_ffdhe2048_l)) int32_t rfc7919_ffdhe2048_l;

  /// @brief Field rfc7919_ffdhe2048, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe2048, put = setStaticF_rfc7919_ffdhe2048))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe2048;

  /// @brief Field rfc7919_ffdhe3072_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe3072_p, put = setStaticF_rfc7919_ffdhe3072_p))::StringW rfc7919_ffdhe3072_p;

  /// @brief Field rfc7919_ffdhe3072_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc7919_ffdhe3072_l, put = setStaticF_rfc7919_ffdhe3072_l)) int32_t rfc7919_ffdhe3072_l;

  /// @brief Field rfc7919_ffdhe3072, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe3072, put = setStaticF_rfc7919_ffdhe3072))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe3072;

  /// @brief Field rfc7919_ffdhe4096_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe4096_p, put = setStaticF_rfc7919_ffdhe4096_p))::StringW rfc7919_ffdhe4096_p;

  /// @brief Field rfc7919_ffdhe4096_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc7919_ffdhe4096_l, put = setStaticF_rfc7919_ffdhe4096_l)) int32_t rfc7919_ffdhe4096_l;

  /// @brief Field rfc7919_ffdhe4096, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe4096, put = setStaticF_rfc7919_ffdhe4096))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe4096;

  /// @brief Field rfc7919_ffdhe6144_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe6144_p, put = setStaticF_rfc7919_ffdhe6144_p))::StringW rfc7919_ffdhe6144_p;

  /// @brief Field rfc7919_ffdhe6144_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc7919_ffdhe6144_l, put = setStaticF_rfc7919_ffdhe6144_l)) int32_t rfc7919_ffdhe6144_l;

  /// @brief Field rfc7919_ffdhe6144, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe6144, put = setStaticF_rfc7919_ffdhe6144))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe6144;

  /// @brief Field rfc7919_ffdhe8192_p, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe8192_p, put = setStaticF_rfc7919_ffdhe8192_p))::StringW rfc7919_ffdhe8192_p;

  /// @brief Field rfc7919_ffdhe8192_l, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_rfc7919_ffdhe8192_l, put = setStaticF_rfc7919_ffdhe8192_l)) int32_t rfc7919_ffdhe8192_l;

  /// @brief Field rfc7919_ffdhe8192, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rfc7919_ffdhe8192, put = setStaticF_rfc7919_ffdhe8192))::Org::BouncyCastle::Crypto::Parameters::DHParameters* rfc7919_ffdhe8192;

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline void setStaticF_rfc2409_768_p(::StringW value);

  static inline ::StringW getStaticF_rfc2409_768_p();

  static inline void setStaticF_rfc2409_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc2409_768();

  static inline void setStaticF_rfc2409_1024_p(::StringW value);

  static inline ::StringW getStaticF_rfc2409_1024_p();

  static inline void setStaticF_rfc2409_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc2409_1024();

  static inline void setStaticF_rfc3526_1536_p(::StringW value);

  static inline ::StringW getStaticF_rfc3526_1536_p();

  static inline void setStaticF_rfc3526_1536_l(int32_t value);

  static inline int32_t getStaticF_rfc3526_1536_l();

  static inline void setStaticF_rfc3526_1536(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_1536();

  static inline void setStaticF_rfc3526_2048_p(::StringW value);

  static inline ::StringW getStaticF_rfc3526_2048_p();

  static inline void setStaticF_rfc3526_2048_l(int32_t value);

  static inline int32_t getStaticF_rfc3526_2048_l();

  static inline void setStaticF_rfc3526_2048(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_2048();

  static inline void setStaticF_rfc3526_3072_p(::StringW value);

  static inline ::StringW getStaticF_rfc3526_3072_p();

  static inline void setStaticF_rfc3526_3072_l(int32_t value);

  static inline int32_t getStaticF_rfc3526_3072_l();

  static inline void setStaticF_rfc3526_3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_3072();

  static inline void setStaticF_rfc3526_4096_p(::StringW value);

  static inline ::StringW getStaticF_rfc3526_4096_p();

  static inline void setStaticF_rfc3526_4096_l(int32_t value);

  static inline int32_t getStaticF_rfc3526_4096_l();

  static inline void setStaticF_rfc3526_4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_4096();

  static inline void setStaticF_rfc3526_6144_p(::StringW value);

  static inline ::StringW getStaticF_rfc3526_6144_p();

  static inline void setStaticF_rfc3526_6144_l(int32_t value);

  static inline int32_t getStaticF_rfc3526_6144_l();

  static inline void setStaticF_rfc3526_6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_6144();

  static inline void setStaticF_rfc3526_8192_p(::StringW value);

  static inline ::StringW getStaticF_rfc3526_8192_p();

  static inline void setStaticF_rfc3526_8192_l(int32_t value);

  static inline int32_t getStaticF_rfc3526_8192_l();

  static inline void setStaticF_rfc3526_8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_8192();

  static inline void setStaticF_rfc4306_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc4306_768();

  static inline void setStaticF_rfc4306_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc4306_1024();

  static inline void setStaticF_rfc5996_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc5996_768();

  static inline void setStaticF_rfc5996_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc5996_1024();

  static inline void setStaticF_rfc7919_ffdhe2048_p(::StringW value);

  static inline ::StringW getStaticF_rfc7919_ffdhe2048_p();

  static inline void setStaticF_rfc7919_ffdhe2048_l(int32_t value);

  static inline int32_t getStaticF_rfc7919_ffdhe2048_l();

  static inline void setStaticF_rfc7919_ffdhe2048(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe2048();

  static inline void setStaticF_rfc7919_ffdhe3072_p(::StringW value);

  static inline ::StringW getStaticF_rfc7919_ffdhe3072_p();

  static inline void setStaticF_rfc7919_ffdhe3072_l(int32_t value);

  static inline int32_t getStaticF_rfc7919_ffdhe3072_l();

  static inline void setStaticF_rfc7919_ffdhe3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe3072();

  static inline void setStaticF_rfc7919_ffdhe4096_p(::StringW value);

  static inline ::StringW getStaticF_rfc7919_ffdhe4096_p();

  static inline void setStaticF_rfc7919_ffdhe4096_l(int32_t value);

  static inline int32_t getStaticF_rfc7919_ffdhe4096_l();

  static inline void setStaticF_rfc7919_ffdhe4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe4096();

  static inline void setStaticF_rfc7919_ffdhe6144_p(::StringW value);

  static inline ::StringW getStaticF_rfc7919_ffdhe6144_p();

  static inline void setStaticF_rfc7919_ffdhe6144_l(int32_t value);

  static inline int32_t getStaticF_rfc7919_ffdhe6144_l();

  static inline void setStaticF_rfc7919_ffdhe6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe6144();

  static inline void setStaticF_rfc7919_ffdhe8192_p(::StringW value);

  static inline ::StringW getStaticF_rfc7919_ffdhe8192_p();

  static inline void setStaticF_rfc7919_ffdhe8192_l(int32_t value);

  static inline int32_t getStaticF_rfc7919_ffdhe8192_l();

  static inline void setStaticF_rfc7919_ffdhe8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe8192();

  /// @brief Method FromHex addr 0x1219d50 size 0xa0 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW hex);

  /// @brief Method FromPG addr 0x1219df0 size 0xb4 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromPG(::StringW hexP, ::StringW hexG);

  /// @brief Method SafePrimeGen2 addr 0x1219ea4 size 0x58 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* SafePrimeGen2(::StringW hexP);

  /// @brief Method SafePrimeGen2 addr 0x1219efc size 0xd0 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* SafePrimeGen2(::StringW hexP, int32_t l);

  static inline ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups* New_ctor();

  /// @brief Method .ctor addr 0x121a460 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DHStandardGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DHStandardGroups(DHStandardGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DHStandardGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DHStandardGroups(DHStandardGroups const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DHStandardGroups();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*, "Org.BouncyCastle.Crypto.Agreement", "DHStandardGroups");
