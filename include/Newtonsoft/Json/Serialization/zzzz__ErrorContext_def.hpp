#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ErrorContext)
namespace System {
class Object;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ErrorContext);
// Type: Newtonsoft.Json.Serialization::ErrorContext
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11932))
// CS Name: ::Newtonsoft.Json.Serialization::ErrorContext*
class CORDL_TYPE ErrorContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Traced>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__Traced_k__BackingField, put = __set__Traced_k__BackingField)) bool _Traced_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Error_k__BackingField, put = __set__Error_k__BackingField))::System::Exception* _Error_k__BackingField;

  /// @brief Field <OriginalObject>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__OriginalObject_k__BackingField, put = __set__OriginalObject_k__BackingField))::System::Object* _OriginalObject_k__BackingField;

  /// @brief Field <Member>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__Member_k__BackingField, put = __set__Member_k__BackingField))::System::Object* _Member_k__BackingField;

  /// @brief Field <Path>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__Path_k__BackingField, put = __set__Path_k__BackingField))::StringW _Path_k__BackingField;

  /// @brief Field <Handled>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __get__Handled_k__BackingField, put = __set__Handled_k__BackingField)) bool _Handled_k__BackingField;

  __declspec(property(get = get_Traced, put = set_Traced)) bool Traced;

  __declspec(property(get = get_Error, put = set_Error))::System::Exception* Error;

  __declspec(property(get = get_OriginalObject, put = set_OriginalObject))::System::Object* OriginalObject;

  __declspec(property(get = get_Member, put = set_Member))::System::Object* Member;

  __declspec(property(get = get_Path, put = set_Path))::StringW Path;

  __declspec(property(get = get_Handled, put = set_Handled)) bool Handled;

  constexpr bool& __get__Traced_k__BackingField();

  constexpr bool const& __get__Traced_k__BackingField() const;

  constexpr void __set__Traced_k__BackingField(bool value);

  constexpr ::System::Exception*& __get__Error_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get__Error_k__BackingField() const;

  constexpr void __set__Error_k__BackingField(::System::Exception* value);

  constexpr ::System::Object*& __get__OriginalObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__OriginalObject_k__BackingField() const;

  constexpr void __set__OriginalObject_k__BackingField(::System::Object* value);

  constexpr ::System::Object*& __get__Member_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__Member_k__BackingField() const;

  constexpr void __set__Member_k__BackingField(::System::Object* value);

  constexpr ::StringW& __get__Path_k__BackingField();

  constexpr ::StringW const& __get__Path_k__BackingField() const;

  constexpr void __set__Path_k__BackingField(::StringW value);

  constexpr bool& __get__Handled_k__BackingField();

  constexpr bool const& __get__Handled_k__BackingField() const;

  constexpr void __set__Handled_k__BackingField(bool value);

  static inline ::Newtonsoft::Json::Serialization::ErrorContext* New_ctor(::System::Object* originalObject, ::System::Object* member, ::StringW path, ::System::Exception* error);

  /// @brief Method .ctor, addr 0x26778a4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* originalObject, ::System::Object* member, ::StringW path, ::System::Exception* error);

  /// @brief Method get_Traced, addr 0x26778e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Traced();

  /// @brief Method set_Traced, addr 0x26778ec, size 0xc, virtual false, abstract: false, final false
  inline void set_Traced(bool value);

  /// @brief Method get_Error, addr 0x26778f8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_Error();

  /// @brief Method set_Error, addr 0x2677900, size 0x8, virtual false, abstract: false, final false
  inline void set_Error(::System::Exception* value);

  /// @brief Method get_OriginalObject, addr 0x2677908, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_OriginalObject();

  /// @brief Method set_OriginalObject, addr 0x2677910, size 0x8, virtual false, abstract: false, final false
  inline void set_OriginalObject(::System::Object* value);

  /// @brief Method get_Member, addr 0x2677918, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Member();

  /// @brief Method set_Member, addr 0x2677920, size 0x8, virtual false, abstract: false, final false
  inline void set_Member(::System::Object* value);

  /// @brief Method get_Path, addr 0x2677928, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method set_Path, addr 0x2677930, size 0x8, virtual false, abstract: false, final false
  inline void set_Path(::StringW value);

  /// @brief Method get_Handled, addr 0x2677938, size 0x8, virtual false, abstract: false, final false
  inline bool get_Handled();

  /// @brief Method set_Handled, addr 0x2677940, size 0xc, virtual false, abstract: false, final false
  inline void set_Handled(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "ErrorContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorContext(ErrorContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorContext(ErrorContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorContext();

public:
  /// @brief Field <Traced>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Traced_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Exception* ____Error_k__BackingField;

  /// @brief Field <OriginalObject>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____OriginalObject_k__BackingField;

  /// @brief Field <Member>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____Member_k__BackingField;

  /// @brief Field <Path>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____Path_k__BackingField;

  /// @brief Field <Handled>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____Handled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ErrorContext, 0x40>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Traced_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Error_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____OriginalObject_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Member_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Path_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Handled_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ErrorContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ErrorContext*, "Newtonsoft.Json.Serialization", "ErrorContext");
