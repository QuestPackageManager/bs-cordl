#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Utils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Linq::Expressions {
class ConstantExpression;
}
namespace System::Linq::Expressions {
class DefaultExpression;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Utils;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Utils);
// Type: System.Linq.Expressions::Utils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::Utils*
class CORDL_TYPE Utils : public ::System::Object {
public:
  // Declarations
  /// @brief Field BoxedDefaultByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultByte, put = setStaticF_BoxedDefaultByte))::System::Object* BoxedDefaultByte;

  /// @brief Field BoxedDefaultChar, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultChar, put = setStaticF_BoxedDefaultChar))::System::Object* BoxedDefaultChar;

  /// @brief Field BoxedDefaultDateTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultDateTime, put = setStaticF_BoxedDefaultDateTime))::System::Object* BoxedDefaultDateTime;

  /// @brief Field BoxedDefaultDecimal, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultDecimal, put = setStaticF_BoxedDefaultDecimal))::System::Object* BoxedDefaultDecimal;

  /// @brief Field BoxedDefaultDouble, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultDouble, put = setStaticF_BoxedDefaultDouble))::System::Object* BoxedDefaultDouble;

  /// @brief Field BoxedDefaultInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultInt16, put = setStaticF_BoxedDefaultInt16))::System::Object* BoxedDefaultInt16;

  /// @brief Field BoxedDefaultInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultInt64, put = setStaticF_BoxedDefaultInt64))::System::Object* BoxedDefaultInt64;

  /// @brief Field BoxedDefaultSByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultSByte, put = setStaticF_BoxedDefaultSByte))::System::Object* BoxedDefaultSByte;

  /// @brief Field BoxedDefaultSingle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultSingle, put = setStaticF_BoxedDefaultSingle))::System::Object* BoxedDefaultSingle;

  /// @brief Field BoxedDefaultUInt16, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultUInt16, put = setStaticF_BoxedDefaultUInt16))::System::Object* BoxedDefaultUInt16;

  /// @brief Field BoxedDefaultUInt32, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultUInt32, put = setStaticF_BoxedDefaultUInt32))::System::Object* BoxedDefaultUInt32;

  /// @brief Field BoxedDefaultUInt64, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedDefaultUInt64, put = setStaticF_BoxedDefaultUInt64))::System::Object* BoxedDefaultUInt64;

  /// @brief Field BoxedFalse, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedFalse, put = setStaticF_BoxedFalse))::System::Object* BoxedFalse;

  /// @brief Field BoxedInt0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedInt0, put = setStaticF_BoxedInt0))::System::Object* BoxedInt0;

  /// @brief Field BoxedInt1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedInt1, put = setStaticF_BoxedInt1))::System::Object* BoxedInt1;

  /// @brief Field BoxedInt2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedInt2, put = setStaticF_BoxedInt2))::System::Object* BoxedInt2;

  /// @brief Field BoxedInt3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedInt3, put = setStaticF_BoxedInt3))::System::Object* BoxedInt3;

  /// @brief Field BoxedIntM1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedIntM1, put = setStaticF_BoxedIntM1))::System::Object* BoxedIntM1;

  /// @brief Field BoxedTrue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BoxedTrue, put = setStaticF_BoxedTrue))::System::Object* BoxedTrue;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Linq::Expressions::DefaultExpression* Empty;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::Linq::Expressions::ConstantExpression* Null;

  /// @brief Field s_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_0, put = setStaticF_s_0))::System::Linq::Expressions::ConstantExpression* s_0;

  /// @brief Field s_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_1, put = setStaticF_s_1))::System::Linq::Expressions::ConstantExpression* s_1;

  /// @brief Field s_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_2, put = setStaticF_s_2))::System::Linq::Expressions::ConstantExpression* s_2;

  /// @brief Field s_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_3, put = setStaticF_s_3))::System::Linq::Expressions::ConstantExpression* s_3;

  /// @brief Field s_false, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_false, put = setStaticF_s_false))::System::Linq::Expressions::ConstantExpression* s_false;

  /// @brief Field s_m1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_m1, put = setStaticF_s_m1))::System::Linq::Expressions::ConstantExpression* s_m1;

  /// @brief Field s_true, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_true, put = setStaticF_s_true))::System::Linq::Expressions::ConstantExpression* s_true;

  /// @brief Method Constant, addr 0x2c2e4d8, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConstantExpression* Constant(bool value);

  /// @brief Method Constant, addr 0x2c2e544, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::ConstantExpression* Constant(int32_t value);

  static inline ::System::Object* getStaticF_BoxedDefaultByte();

  static inline ::System::Object* getStaticF_BoxedDefaultChar();

  static inline ::System::Object* getStaticF_BoxedDefaultDateTime();

  static inline ::System::Object* getStaticF_BoxedDefaultDecimal();

  static inline ::System::Object* getStaticF_BoxedDefaultDouble();

  static inline ::System::Object* getStaticF_BoxedDefaultInt16();

  static inline ::System::Object* getStaticF_BoxedDefaultInt64();

  static inline ::System::Object* getStaticF_BoxedDefaultSByte();

  static inline ::System::Object* getStaticF_BoxedDefaultSingle();

  static inline ::System::Object* getStaticF_BoxedDefaultUInt16();

  static inline ::System::Object* getStaticF_BoxedDefaultUInt32();

  static inline ::System::Object* getStaticF_BoxedDefaultUInt64();

  static inline ::System::Object* getStaticF_BoxedFalse();

  static inline ::System::Object* getStaticF_BoxedInt0();

  static inline ::System::Object* getStaticF_BoxedInt1();

  static inline ::System::Object* getStaticF_BoxedInt2();

  static inline ::System::Object* getStaticF_BoxedInt3();

  static inline ::System::Object* getStaticF_BoxedIntM1();

  static inline ::System::Object* getStaticF_BoxedTrue();

  static inline ::System::Linq::Expressions::DefaultExpression* getStaticF_Empty();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_Null();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_s_0();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_s_1();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_s_2();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_s_3();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_s_false();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_s_m1();

  static inline ::System::Linq::Expressions::ConstantExpression* getStaticF_s_true();

  static inline void setStaticF_BoxedDefaultByte(::System::Object* value);

  static inline void setStaticF_BoxedDefaultChar(::System::Object* value);

  static inline void setStaticF_BoxedDefaultDateTime(::System::Object* value);

  static inline void setStaticF_BoxedDefaultDecimal(::System::Object* value);

  static inline void setStaticF_BoxedDefaultDouble(::System::Object* value);

  static inline void setStaticF_BoxedDefaultInt16(::System::Object* value);

  static inline void setStaticF_BoxedDefaultInt64(::System::Object* value);

  static inline void setStaticF_BoxedDefaultSByte(::System::Object* value);

  static inline void setStaticF_BoxedDefaultSingle(::System::Object* value);

  static inline void setStaticF_BoxedDefaultUInt16(::System::Object* value);

  static inline void setStaticF_BoxedDefaultUInt32(::System::Object* value);

  static inline void setStaticF_BoxedDefaultUInt64(::System::Object* value);

  static inline void setStaticF_BoxedFalse(::System::Object* value);

  static inline void setStaticF_BoxedInt0(::System::Object* value);

  static inline void setStaticF_BoxedInt1(::System::Object* value);

  static inline void setStaticF_BoxedInt2(::System::Object* value);

  static inline void setStaticF_BoxedInt3(::System::Object* value);

  static inline void setStaticF_BoxedIntM1(::System::Object* value);

  static inline void setStaticF_BoxedTrue(::System::Object* value);

  static inline void setStaticF_Empty(::System::Linq::Expressions::DefaultExpression* value);

  static inline void setStaticF_Null(::System::Linq::Expressions::ConstantExpression* value);

  static inline void setStaticF_s_0(::System::Linq::Expressions::ConstantExpression* value);

  static inline void setStaticF_s_1(::System::Linq::Expressions::ConstantExpression* value);

  static inline void setStaticF_s_2(::System::Linq::Expressions::ConstantExpression* value);

  static inline void setStaticF_s_3(::System::Linq::Expressions::ConstantExpression* value);

  static inline void setStaticF_s_false(::System::Linq::Expressions::ConstantExpression* value);

  static inline void setStaticF_s_m1(::System::Linq::Expressions::ConstantExpression* value);

  static inline void setStaticF_s_true(::System::Linq::Expressions::ConstantExpression* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Utils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Utils(Utils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Utils(Utils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Utils, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Utils);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Utils*, "System.Linq.Expressions", "Utils");
