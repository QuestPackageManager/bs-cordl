#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TextInfoToLowerData)
// Forward declare root types
namespace System::Globalization {
class TextInfoToLowerData;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::TextInfoToLowerData);
// Type: System.Globalization::TextInfoToLowerData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3707))
// CS Name: ::System.Globalization::TextInfoToLowerData*
class CORDL_TYPE TextInfoToLowerData : public ::System::Object {
public:
  // Declarations
  /// @brief Field range_00c0_0556, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_00c0_0556, put = setStaticF_range_00c0_0556))::ArrayW<char16_t, ::Array<char16_t>*> range_00c0_0556;

  /// @brief Field range_10a0_10c5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_10a0_10c5, put = setStaticF_range_10a0_10c5))::ArrayW<char16_t, ::Array<char16_t>*> range_10a0_10c5;

  /// @brief Field range_1e00_1ffc, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_1e00_1ffc, put = setStaticF_range_1e00_1ffc))::ArrayW<char16_t, ::Array<char16_t>*> range_1e00_1ffc;

  /// @brief Field range_2160_216f, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_2160_216f, put = setStaticF_range_2160_216f))::ArrayW<char16_t, ::Array<char16_t>*> range_2160_216f;

  /// @brief Field range_24b6_24cf, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_24b6_24cf, put = setStaticF_range_24b6_24cf))::ArrayW<char16_t, ::Array<char16_t>*> range_24b6_24cf;

  /// @brief Field range_2c00_2c2e, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_2c00_2c2e, put = setStaticF_range_2c00_2c2e))::ArrayW<char16_t, ::Array<char16_t>*> range_2c00_2c2e;

  /// @brief Field range_2c60_2ce2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_2c60_2ce2, put = setStaticF_range_2c60_2ce2))::ArrayW<char16_t, ::Array<char16_t>*> range_2c60_2ce2;

  /// @brief Field range_a640_a696, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_a640_a696, put = setStaticF_range_a640_a696))::ArrayW<char16_t, ::Array<char16_t>*> range_a640_a696;

  /// @brief Field range_a722_a78b, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_range_a722_a78b, put = setStaticF_range_a722_a78b))::ArrayW<char16_t, ::Array<char16_t>*> range_a722_a78b;

  static inline void setStaticF_range_00c0_0556(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_00c0_0556();

  static inline void setStaticF_range_10a0_10c5(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_10a0_10c5();

  static inline void setStaticF_range_1e00_1ffc(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_1e00_1ffc();

  static inline void setStaticF_range_2160_216f(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_2160_216f();

  static inline void setStaticF_range_24b6_24cf(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_24b6_24cf();

  static inline void setStaticF_range_2c00_2c2e(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_2c00_2c2e();

  static inline void setStaticF_range_2c60_2ce2(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_2c60_2ce2();

  static inline void setStaticF_range_a640_a696(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_a640_a696();

  static inline void setStaticF_range_a722_a78b(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_range_a722_a78b();

  // Ctor Parameters [CppParam { name: "", ty: "TextInfoToLowerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInfoToLowerData(TextInfoToLowerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInfoToLowerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInfoToLowerData(TextInfoToLowerData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInfoToLowerData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::TextInfoToLowerData, 0x10>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::TextInfoToLowerData);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TextInfoToLowerData*, "System.Globalization", "TextInfoToLowerData");
