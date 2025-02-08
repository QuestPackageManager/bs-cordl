#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Tsp/TspAlgorithms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TspAlgorithms)
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspAlgorithms;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TspAlgorithms);
// Dependencies System.Object
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// CS Name: Org.BouncyCastle.Tsp.TspAlgorithms
class CORDL_TYPE TspAlgorithms : public ::System::Object {
public:
  // Declarations
  /// @brief Field Allowed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Allowed, put = setStaticF_Allowed)) ::System::Collections::IList* Allowed;

  /// @brief Field Gost3411, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Gost3411, put = setStaticF_Gost3411)) ::StringW Gost3411;

  /// @brief Field Gost3411_2012_256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Gost3411_2012_256, put = setStaticF_Gost3411_2012_256)) ::StringW Gost3411_2012_256;

  /// @brief Field Gost3411_2012_512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Gost3411_2012_512, put = setStaticF_Gost3411_2012_512)) ::StringW Gost3411_2012_512;

  /// @brief Field MD5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MD5, put = setStaticF_MD5)) ::StringW MD5;

  /// @brief Field RipeMD128, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RipeMD128, put = setStaticF_RipeMD128)) ::StringW RipeMD128;

  /// @brief Field RipeMD160, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RipeMD160, put = setStaticF_RipeMD160)) ::StringW RipeMD160;

  /// @brief Field RipeMD256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RipeMD256, put = setStaticF_RipeMD256)) ::StringW RipeMD256;

  /// @brief Field SM3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SM3, put = setStaticF_SM3)) ::StringW SM3;

  /// @brief Field Sha1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Sha1, put = setStaticF_Sha1)) ::StringW Sha1;

  /// @brief Field Sha224, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Sha224, put = setStaticF_Sha224)) ::StringW Sha224;

  /// @brief Field Sha256, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Sha256, put = setStaticF_Sha256)) ::StringW Sha256;

  /// @brief Field Sha384, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Sha384, put = setStaticF_Sha384)) ::StringW Sha384;

  /// @brief Field Sha512, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Sha512, put = setStaticF_Sha512)) ::StringW Sha512;

  static inline ::Org::BouncyCastle::Tsp::TspAlgorithms* New_ctor();

  /// @brief Method .ctor, addr 0x25cf154, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IList* getStaticF_Allowed();

  static inline ::StringW getStaticF_Gost3411();

  static inline ::StringW getStaticF_Gost3411_2012_256();

  static inline ::StringW getStaticF_Gost3411_2012_512();

  static inline ::StringW getStaticF_MD5();

  static inline ::StringW getStaticF_RipeMD128();

  static inline ::StringW getStaticF_RipeMD160();

  static inline ::StringW getStaticF_RipeMD256();

  static inline ::StringW getStaticF_SM3();

  static inline ::StringW getStaticF_Sha1();

  static inline ::StringW getStaticF_Sha224();

  static inline ::StringW getStaticF_Sha256();

  static inline ::StringW getStaticF_Sha384();

  static inline ::StringW getStaticF_Sha512();

  static inline void setStaticF_Allowed(::System::Collections::IList* value);

  static inline void setStaticF_Gost3411(::StringW value);

  static inline void setStaticF_Gost3411_2012_256(::StringW value);

  static inline void setStaticF_Gost3411_2012_512(::StringW value);

  static inline void setStaticF_MD5(::StringW value);

  static inline void setStaticF_RipeMD128(::StringW value);

  static inline void setStaticF_RipeMD160(::StringW value);

  static inline void setStaticF_RipeMD256(::StringW value);

  static inline void setStaticF_SM3(::StringW value);

  static inline void setStaticF_Sha1(::StringW value);

  static inline void setStaticF_Sha224(::StringW value);

  static inline void setStaticF_Sha256(::StringW value);

  static inline void setStaticF_Sha384(::StringW value);

  static inline void setStaticF_Sha512(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TspAlgorithms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TspAlgorithms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TspAlgorithms(TspAlgorithms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TspAlgorithms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TspAlgorithms(TspAlgorithms const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1773 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TspAlgorithms, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspAlgorithms*, "Org.BouncyCastle.Tsp", "TspAlgorithms");
