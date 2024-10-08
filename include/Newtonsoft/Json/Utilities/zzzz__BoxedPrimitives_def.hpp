#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/BoxedPrimitives.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BoxedPrimitives)
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class BoxedPrimitives;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::BoxedPrimitives);
// Type: Newtonsoft.Json.Utilities::BoxedPrimitives
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::BoxedPrimitives*
class CORDL_TYPE BoxedPrimitives : public ::System::Object {
public:
  // Declarations
  /// @brief Field BooleanFalse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BooleanFalse, put = setStaticF_BooleanFalse)) ::System::Object* BooleanFalse;

  /// @brief Field BooleanTrue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BooleanTrue, put = setStaticF_BooleanTrue)) ::System::Object* BooleanTrue;

  /// @brief Field DecimalZero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DecimalZero, put = setStaticF_DecimalZero)) ::System::Object* DecimalZero;

  /// @brief Field DoubleNaN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DoubleNaN, put = setStaticF_DoubleNaN)) ::System::Object* DoubleNaN;

  /// @brief Field DoubleNegativeInfinity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DoubleNegativeInfinity, put = setStaticF_DoubleNegativeInfinity)) ::System::Object* DoubleNegativeInfinity;

  /// @brief Field DoublePositiveInfinity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DoublePositiveInfinity, put = setStaticF_DoublePositiveInfinity)) ::System::Object* DoublePositiveInfinity;

  /// @brief Field DoubleZero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DoubleZero, put = setStaticF_DoubleZero)) ::System::Object* DoubleZero;

  /// @brief Field Int32_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_0, put = setStaticF_Int32_0)) ::System::Object* Int32_0;

  /// @brief Field Int32_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_1, put = setStaticF_Int32_1)) ::System::Object* Int32_1;

  /// @brief Field Int32_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_2, put = setStaticF_Int32_2)) ::System::Object* Int32_2;

  /// @brief Field Int32_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_3, put = setStaticF_Int32_3)) ::System::Object* Int32_3;

  /// @brief Field Int32_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_4, put = setStaticF_Int32_4)) ::System::Object* Int32_4;

  /// @brief Field Int32_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_5, put = setStaticF_Int32_5)) ::System::Object* Int32_5;

  /// @brief Field Int32_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_6, put = setStaticF_Int32_6)) ::System::Object* Int32_6;

  /// @brief Field Int32_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_7, put = setStaticF_Int32_7)) ::System::Object* Int32_7;

  /// @brief Field Int32_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_8, put = setStaticF_Int32_8)) ::System::Object* Int32_8;

  /// @brief Field Int32_M1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32_M1, put = setStaticF_Int32_M1)) ::System::Object* Int32_M1;

  /// @brief Field Int64_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_0, put = setStaticF_Int64_0)) ::System::Object* Int64_0;

  /// @brief Field Int64_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_1, put = setStaticF_Int64_1)) ::System::Object* Int64_1;

  /// @brief Field Int64_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_2, put = setStaticF_Int64_2)) ::System::Object* Int64_2;

  /// @brief Field Int64_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_3, put = setStaticF_Int64_3)) ::System::Object* Int64_3;

  /// @brief Field Int64_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_4, put = setStaticF_Int64_4)) ::System::Object* Int64_4;

  /// @brief Field Int64_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_5, put = setStaticF_Int64_5)) ::System::Object* Int64_5;

  /// @brief Field Int64_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_6, put = setStaticF_Int64_6)) ::System::Object* Int64_6;

  /// @brief Field Int64_7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_7, put = setStaticF_Int64_7)) ::System::Object* Int64_7;

  /// @brief Field Int64_8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_8, put = setStaticF_Int64_8)) ::System::Object* Int64_8;

  /// @brief Field Int64_M1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int64_M1, put = setStaticF_Int64_M1)) ::System::Object* Int64_M1;

  /// @brief Method Get, addr 0x3e495f0, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Object* Get(::System::Decimal value);

  /// @brief Method Get, addr 0x3e4915c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Object* Get(bool value);

  /// @brief Method Get, addr 0x3e496d8, size 0x108, virtual false, abstract: false, final false
  static inline ::System::Object* Get(double_t value);

  /// @brief Method Get, addr 0x3e491c4, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Object* Get(int32_t value);

  /// @brief Method Get, addr 0x3e493d4, size 0x21c, virtual false, abstract: false, final false
  static inline ::System::Object* Get(int64_t value);

  static inline ::System::Object* getStaticF_BooleanFalse();

  static inline ::System::Object* getStaticF_BooleanTrue();

  static inline ::System::Object* getStaticF_DecimalZero();

  static inline ::System::Object* getStaticF_DoubleNaN();

  static inline ::System::Object* getStaticF_DoubleNegativeInfinity();

  static inline ::System::Object* getStaticF_DoublePositiveInfinity();

  static inline ::System::Object* getStaticF_DoubleZero();

  static inline ::System::Object* getStaticF_Int32_0();

  static inline ::System::Object* getStaticF_Int32_1();

  static inline ::System::Object* getStaticF_Int32_2();

  static inline ::System::Object* getStaticF_Int32_3();

  static inline ::System::Object* getStaticF_Int32_4();

  static inline ::System::Object* getStaticF_Int32_5();

  static inline ::System::Object* getStaticF_Int32_6();

  static inline ::System::Object* getStaticF_Int32_7();

  static inline ::System::Object* getStaticF_Int32_8();

  static inline ::System::Object* getStaticF_Int32_M1();

  static inline ::System::Object* getStaticF_Int64_0();

  static inline ::System::Object* getStaticF_Int64_1();

  static inline ::System::Object* getStaticF_Int64_2();

  static inline ::System::Object* getStaticF_Int64_3();

  static inline ::System::Object* getStaticF_Int64_4();

  static inline ::System::Object* getStaticF_Int64_5();

  static inline ::System::Object* getStaticF_Int64_6();

  static inline ::System::Object* getStaticF_Int64_7();

  static inline ::System::Object* getStaticF_Int64_8();

  static inline ::System::Object* getStaticF_Int64_M1();

  static inline void setStaticF_BooleanFalse(::System::Object* value);

  static inline void setStaticF_BooleanTrue(::System::Object* value);

  static inline void setStaticF_DecimalZero(::System::Object* value);

  static inline void setStaticF_DoubleNaN(::System::Object* value);

  static inline void setStaticF_DoubleNegativeInfinity(::System::Object* value);

  static inline void setStaticF_DoublePositiveInfinity(::System::Object* value);

  static inline void setStaticF_DoubleZero(::System::Object* value);

  static inline void setStaticF_Int32_0(::System::Object* value);

  static inline void setStaticF_Int32_1(::System::Object* value);

  static inline void setStaticF_Int32_2(::System::Object* value);

  static inline void setStaticF_Int32_3(::System::Object* value);

  static inline void setStaticF_Int32_4(::System::Object* value);

  static inline void setStaticF_Int32_5(::System::Object* value);

  static inline void setStaticF_Int32_6(::System::Object* value);

  static inline void setStaticF_Int32_7(::System::Object* value);

  static inline void setStaticF_Int32_8(::System::Object* value);

  static inline void setStaticF_Int32_M1(::System::Object* value);

  static inline void setStaticF_Int64_0(::System::Object* value);

  static inline void setStaticF_Int64_1(::System::Object* value);

  static inline void setStaticF_Int64_2(::System::Object* value);

  static inline void setStaticF_Int64_3(::System::Object* value);

  static inline void setStaticF_Int64_4(::System::Object* value);

  static inline void setStaticF_Int64_5(::System::Object* value);

  static inline void setStaticF_Int64_6(::System::Object* value);

  static inline void setStaticF_Int64_7(::System::Object* value);

  static inline void setStaticF_Int64_8(::System::Object* value);

  static inline void setStaticF_Int64_M1(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxedPrimitives();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoxedPrimitives", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoxedPrimitives(BoxedPrimitives&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoxedPrimitives", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoxedPrimitives(BoxedPrimitives const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10155 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::BoxedPrimitives, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::BoxedPrimitives);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::BoxedPrimitives*, "Newtonsoft.Json.Utilities", "BoxedPrimitives");
