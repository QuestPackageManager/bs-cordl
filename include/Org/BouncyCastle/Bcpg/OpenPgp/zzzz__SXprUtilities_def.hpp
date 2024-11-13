#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/SXprUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SXprUtilities)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class __SXprUtilities__MyS2k;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace System::IO {
class Stream;
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::SXprUtilities::MyS2k*
class CORDL_TYPE __SXprUtilities__MyS2k : public ::Org::BouncyCastle::Bcpg::S2k {
public:
  // Declarations
  __declspec(property(get = get_IterationCount)) int64_t IterationCount;

  /// @brief Field mIterationCount64, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mIterationCount64, put = __cordl_internal_set_mIterationCount64)) int64_t mIterationCount64;

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k* New_ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                                     int64_t iterationCount64);

  constexpr int64_t const& __cordl_internal_get_mIterationCount64() const;

  constexpr int64_t& __cordl_internal_get_mIterationCount64();

  constexpr void __cordl_internal_set_mIterationCount64(int64_t value);

  /// @brief Method .ctor, addr 0x2519d2c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::HashAlgorithmTag algorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, int64_t iterationCount64);

  /// @brief Method get_IterationCount, addr 0x2519d54, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_IterationCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SXprUtilities__MyS2k();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SXprUtilities__MyS2k", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SXprUtilities__MyS2k(__SXprUtilities__MyS2k&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SXprUtilities__MyS2k", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SXprUtilities__MyS2k(__SXprUtilities__MyS2k const&) = delete;

  /// @brief Field mIterationCount64, offset: 0x28, size: 0x8, def value: None
  int64_t ___mIterationCount64;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k, ___mIterationCount64) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
// Type: Org.BouncyCastle.Bcpg.OpenPgp::SXprUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::SXprUtilities*
class CORDL_TYPE SXprUtilities : public ::System::Object {
public:
  // Declarations
  using MyS2k = ::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k;

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities* New_ctor();

  /// @brief Method ParseS2k, addr 0x250d8d0, size 0xf8, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Bcpg::S2k* ParseS2k(::System::IO::Stream* input);

  /// @brief Method ReadBytes, addr 0x250d100, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadBytes(::System::IO::Stream* input, int32_t ch);

  /// @brief Method ReadLength, addr 0x2519cb8, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ReadLength(::System::IO::Stream* input, int32_t ch);

  /// @brief Method ReadString, addr 0x250cfc4, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW ReadString(::System::IO::Stream* input, int32_t ch);

  /// @brief Method SkipCloseParenthesis, addr 0x250d08c, size 0x74, virtual false, abstract: false, final false
  static inline void SkipCloseParenthesis(::System::IO::Stream* input);

  /// @brief Method SkipOpenParenthesis, addr 0x250cf50, size 0x74, virtual false, abstract: false, final false
  static inline void SkipOpenParenthesis(::System::IO::Stream* input);

  /// @brief Method .ctor, addr 0x2519cb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SXprUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SXprUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SXprUtilities(SXprUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SXprUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SXprUtilities(SXprUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::SXprUtilities*, "Org.BouncyCastle.Bcpg.OpenPgp", "SXprUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::__SXprUtilities__MyS2k*, "Org.BouncyCastle.Bcpg.OpenPgp", "SXprUtilities/MyS2k");
