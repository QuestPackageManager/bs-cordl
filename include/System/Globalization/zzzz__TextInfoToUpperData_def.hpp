#pragma once
// IWYU pragma private; include "System/Globalization/TextInfoToUpperData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TextInfoToUpperData)
// Forward declare root types
namespace System::Globalization {
class TextInfoToUpperData;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::TextInfoToUpperData);
// Type: System.Globalization::TextInfoToUpperData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::TextInfoToUpperData*
class CORDL_TYPE TextInfoToUpperData : public ::System::Object {
public:
  // Declarations
  /// @brief Field range_00e0_0586, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_00e0_0586, put = setStaticF_range_00e0_0586)) ::ArrayW<char16_t, ::Array<char16_t>*> range_00e0_0586;

  /// @brief Field range_1e01_1ff3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_1e01_1ff3, put = setStaticF_range_1e01_1ff3)) ::ArrayW<char16_t, ::Array<char16_t>*> range_1e01_1ff3;

  /// @brief Field range_2170_2184, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_2170_2184, put = setStaticF_range_2170_2184)) ::ArrayW<char16_t, ::Array<char16_t>*> range_2170_2184;

  /// @brief Field range_24d0_24e9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_24d0_24e9, put = setStaticF_range_24d0_24e9)) ::ArrayW<char16_t, ::Array<char16_t>*> range_24d0_24e9;

  /// @brief Field range_2c30_2ce3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_2c30_2ce3, put = setStaticF_range_2c30_2ce3)) ::ArrayW<char16_t, ::Array<char16_t>*> range_2c30_2ce3;

  /// @brief Field range_2d00_2d25, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_2d00_2d25, put = setStaticF_range_2d00_2d25)) ::ArrayW<char16_t, ::Array<char16_t>*> range_2d00_2d25;

  /// @brief Field range_a641_a697, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_a641_a697, put = setStaticF_range_a641_a697)) ::ArrayW<char16_t, ::Array<char16_t>*> range_a641_a697;

  /// @brief Field range_a723_a78c, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_a723_a78c, put = setStaticF_range_a723_a78c)) ::ArrayW<char16_t, ::Array<char16_t>*> range_a723_a78c;

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_00e0_0586();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_1e01_1ff3();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_2170_2184();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_24d0_24e9();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_2c30_2ce3();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_2d00_2d25();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_a641_a697();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_a723_a78c();

  static inline void setStaticF_range_00e0_0586(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_range_1e01_1ff3(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_range_2170_2184(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_range_24d0_24e9(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_range_2c30_2ce3(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_range_2d00_2d25(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_range_a641_a697(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_range_a723_a78c(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInfoToUpperData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextInfoToUpperData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInfoToUpperData(TextInfoToUpperData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInfoToUpperData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInfoToUpperData(TextInfoToUpperData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3724 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TextInfoToUpperData, 0x10>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::TextInfoToUpperData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfoToUpperData*, "System.Globalization", "TextInfoToUpperData");
