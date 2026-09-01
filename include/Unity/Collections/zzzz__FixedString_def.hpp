#pragma once
// IWYU pragma private; include "Unity\Collections\FixedString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString)
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
// Forward declare root types
namespace Unity::Collections {
class FixedString;
}
// Write type traits
MARK_REF_T(::Unity::Collections::FixedString*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString*, "Unity.Collections", "FixedString");
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedString
class CORDL_TYPE FixedString : public ::System::Object {
public:
  // Declarations
  /// @brief Method Format, addr 0x64c1784, size 0x5ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0);

  /// @brief Method Format, addr 0x64c14a0, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x64c0a48, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bfe4c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x64bf254, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c1120, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1);

  /// @brief Method Format, addr 0x64c0658, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bfa40, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64bee34, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c0db4, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1);

  /// @brief Method Format, addr 0x64c0254, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bf640, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64bea48, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, T3 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, T2 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c1698, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0);

  /// @brief Method Format, addr 0x64c1374, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x64c08f4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bfcfc, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x64bf0e8, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c1008, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1);

  /// @brief Method Format, addr 0x64c0508, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bf8fc, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64bece4, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c0c88, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1);

  /// @brief Method Format, addr 0x64c00e8, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bf4f0, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64be8f4, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c15b0, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0);

  /// @brief Method Format, addr 0x64c124c, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x64c07ac, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bfb90, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x64befa0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, T2 arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, float_t arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c0edc, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1);

  /// @brief Method Format, addr 0x64c039c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bf7ac, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64beb90, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64c0b78, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1);

  /// @brief Method Format, addr 0x64bffa0, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x64bf39c, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x64be7c4, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x64be66c, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bbe0c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b9560, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bd930, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bb064, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b87c4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bcb90, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64ba2e8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b7a3c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64be214, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bb990, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b90d8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bd4b4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64babdc, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8318, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bc708, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b9e3c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b75b4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bdda0, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bb4f8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8c4c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bd01c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64ba768, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b7e98, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bc27c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b99bc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b7158, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3, typename T4>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, T4 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, T3 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, T2 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, T1 arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64be4f8, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bbc94, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b93d4, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bd7b8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64baee8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8634, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bca04, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64ba158, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b78b0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64be09c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bb814, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8f48, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bd338, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64baa74, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b819c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bc578, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b9cc0, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b743c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bdc14, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bb368, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8ac0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bce8c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64ba5ec, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b7d20, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bc0f0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b9844, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b6fe4, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64be388, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bbb08, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b9264, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bd62c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bad58, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b84a8, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bc894, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b9fcc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b7740, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, T3 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, T2 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, T1 arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bdf10, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bb684, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8dbc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bd1a8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64ba8f8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8024, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bc3ec, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b9b48, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b72c8, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bdaa4, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x64bb1dc, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b8950, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, int32_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, T2 arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, float_t arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bcd00, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64ba474, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b7bac, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x64bbf80, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x64b96d0, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x64b6e8c, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FixedString(FixedString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FixedString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FixedString(FixedString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15618 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::FixedString) == 0x10, "Size mismatch!");

} // namespace Unity::Collections
