#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::Unity::Collections::FixedString);
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.FixedString
class CORDL_TYPE FixedString : public ::System::Object {
public:
  // Declarations
  /// @brief Method Format, addr 0x630b108, size 0x5ac, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0);

  /// @brief Method Format, addr 0x630ae24, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x630a3cc, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x63097d0, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x6308bd8, size 0x148, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x630aaa4, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1);

  /// @brief Method Format, addr 0x6309fdc, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x63093c4, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x63087b8, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x630a738, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1);

  /// @brief Method Format, addr 0x6309bd8, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x6308fc4, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x63083cc, size 0x148, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x630b01c, size 0xec, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0);

  /// @brief Method Format, addr 0x630acf8, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x630a278, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x6309680, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x6308a6c, size 0x16c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x630a98c, size 0x118, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1);

  /// @brief Method Format, addr 0x6309e8c, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x6309280, size 0x144, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6308668, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x630a60c, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1);

  /// @brief Method Format, addr 0x6309a6c, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x6308e74, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6308278, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x630af34, size 0xe8, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0);

  /// @brief Method Format, addr 0x630abd0, size 0x128, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1);

  /// @brief Method Format, addr 0x630a130, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, T1 arg2);

  /// @brief Method Format, addr 0x6309514, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2);

  /// @brief Method Format, addr 0x6308924, size 0x148, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x630a860, size 0x12c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1);

  /// @brief Method Format, addr 0x6309d20, size 0x16c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x6309130, size 0x150, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6308514, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x630a4fc, size 0x110, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1);

  /// @brief Method Format, addr 0x6309924, size 0x148, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, T1 arg2);

  /// @brief Method Format, addr 0x6308d20, size 0x154, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2);

  /// @brief Method Format, addr 0x6308148, size 0x130, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString128Bytes Format(::Unity::Collections::FixedString128Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2);

  /// @brief Method Format, addr 0x6307ff0, size 0x158, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1>
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6305790, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x6302ee4, size 0x170, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x63072b4, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x63049e8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6302148, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6306514, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303c6c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x63013c0, size 0x170, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6307b98, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6305314, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x6302a5c, size 0x18c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6306e38, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6304560, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6301c9c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x630608c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x63037c0, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6300f38, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6307724, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6304e7c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x63025d0, size 0x170, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x63069a0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x63040ec, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x630181c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6305c00, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303340, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, ::StringW arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6300adc, size 0x170, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6307e7c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6305618, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x6302d58, size 0x18c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x630713c, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x630486c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6301fb8, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6306388, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303adc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6301234, size 0x18c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6307a20, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6305198, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x63028cc, size 0x190, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6306cbc, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x63043f8, size 0x168, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6301b20, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6305efc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303644, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6300dc0, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6307598, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6304cec, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x6302444, size 0x18c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6306810, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303f70, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x63016a4, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6305a74, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x63031c8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6300968, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, float_t arg0, int32_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6307d0c, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x630548c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x6302be8, size 0x170, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6306fb0, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x63046dc, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6301e2c, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6306218, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303950, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, ::StringW arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x63010c4, size 0x170, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6307894, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6305008, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x6302740, size 0x18c, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6306b2c, size 0x190, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x630427c, size 0x17c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x63019a8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6305d70, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x63034cc, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6300c4c, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, float_t arg1, int32_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6307428, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, T1 arg3);

  /// @brief Method Format, addr 0x6304b60, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, ::StringW arg2, float_t arg3);

  /// @brief Method Format, addr 0x63022d4, size 0x170, virtual false, abstract: false, final false
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

  /// @brief Method Format, addr 0x6306684, size 0x18c, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303df8, size 0x178, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6301530, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, float_t arg2, int32_t arg3);

  /// @brief Method Format, addr 0x6305904, size 0x170, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, ::StringW arg3);

  /// @brief Method Format, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1> static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, T1 arg3);

  /// @brief Method Format, addr 0x6303054, size 0x174, virtual false, abstract: false, final false
  static inline ::Unity::Collections::FixedString512Bytes Format(::Unity::Collections::FixedString512Bytes formatString, int32_t arg0, int32_t arg1, int32_t arg2, float_t arg3);

  /// @brief Method Format, addr 0x6300810, size 0x158, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15587 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::FixedString, 0x10>, "Size mismatch!");

} // namespace Unity::Collections
NEED_NO_BOX(::Unity::Collections::FixedString);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::FixedString*, "Unity.Collections", "FixedString");
