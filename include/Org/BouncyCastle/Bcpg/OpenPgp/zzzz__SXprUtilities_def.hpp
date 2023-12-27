#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SXprUtilities)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __SXprUtilities__MyS2k;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class SXprUtilities;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __SXprUtilities__MyS2k;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k);
// Type: ::MyS2k
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1676))
// CS Name: ::SXprUtilities::MyS2k*
class CORDL_TYPE __SXprUtilities__MyS2k : public ::Org::BouncyCastle::Bcpg::S2k {
public:
  // Declarations
  /// @brief Field mIterationCount64, offset 0x28, size 0x8
  __declspec(property(get = __get_mIterationCount64, put = __set_mIterationCount64)) int64_t mIterationCount64;

  __declspec(property(get = get_IterationCount)) int64_t IterationCount;

  constexpr int64_t& __get_mIterationCount64();

  constexpr int64_t const& __get_mIterationCount64() const;

  constexpr void __set_mIterationCount64(int64_t value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k* New_ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                                     int64_t iterationCount64);

  /// @brief Method .ctor addr 0x10cfd08 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int64_t iterationCount64);

  /// @brief Method get_IterationCount addr 0x10cfd30 size 0x8 virtual true final false
  inline int64_t get_IterationCount();

  // Ctor Parameters [CppParam { name: "", ty: "__SXprUtilities__MyS2k", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SXprUtilities__MyS2k(__SXprUtilities__MyS2k&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SXprUtilities__MyS2k", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SXprUtilities__MyS2k(__SXprUtilities__MyS2k const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SXprUtilities__MyS2k();

public:
  /// @brief Field mIterationCount64, offset: 0x28, size: 0x8, def value: None
  int64_t ___mIterationCount64;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::SXprUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1677))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::SXprUtilities*
class CORDL_TYPE SXprUtilities : public ::System::Object {
public:
  // Declarations
  using MyS2k = ::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k;

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities* New_ctor();

  /// @brief Method .ctor addr 0x10cfc8c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method ReadLength addr 0x10cfc94 size 0x74 virtual false final false
  static inline int32_t ReadLength(::System::IO::Stream* input, int32_t ch);

  /// @brief Method ReadString addr 0x10c2dec size 0xc8 virtual false final false
  static inline ::StringW ReadString(::System::IO::Stream* input, int32_t ch);

  /// @brief Method ReadBytes addr 0x10c2f2c size 0x80 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(::System::IO::Stream* input, int32_t ch);

  /// @brief Method ParseS2k addr 0x10c3720 size 0xfc virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::S2k* ParseS2k(::System::IO::Stream* input);

  /// @brief Method SkipOpenParenthesis addr 0x10c2d74 size 0x78 virtual false final false
  static inline void SkipOpenParenthesis(::System::IO::Stream* input);

  /// @brief Method SkipCloseParenthesis addr 0x10c2eb4 size 0x78 virtual false final false
  static inline void SkipCloseParenthesis(::System::IO::Stream* input);

  // Ctor Parameters [CppParam { name: "", ty: "SXprUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SXprUtilities(SXprUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SXprUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SXprUtilities(SXprUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SXprUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*, "Org.BouncyCastle.Bcpg.OpenPgp", "SXprUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k*, "Org.BouncyCastle.Bcpg.OpenPgp", "SXprUtilities/MyS2k");
