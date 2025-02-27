#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ErrorContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ErrorContext)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ErrorContext);
// Dependencies System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.ErrorContext
class CORDL_TYPE ErrorContext : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Error)) ::System::Exception* Error;

  __declspec(property(get = get_Handled, put = set_Handled)) bool Handled;

  __declspec(property(get = get_Member)) ::System::Object* Member;

  __declspec(property(get = get_OriginalObject)) ::System::Object* OriginalObject;

  __declspec(property(get = get_Path)) ::StringW Path;

  __declspec(property(get = get_Traced, put = set_Traced)) bool Traced;

  /// @brief Field <Error>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Error_k__BackingField, put = __cordl_internal_set__Error_k__BackingField)) ::System::Exception* _Error_k__BackingField;

  /// @brief Field <Handled>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__Handled_k__BackingField, put = __cordl_internal_set__Handled_k__BackingField)) bool _Handled_k__BackingField;

  /// @brief Field <Member>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Member_k__BackingField, put = __cordl_internal_set__Member_k__BackingField)) ::System::Object* _Member_k__BackingField;

  /// @brief Field <OriginalObject>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__OriginalObject_k__BackingField, put = __cordl_internal_set__OriginalObject_k__BackingField)) ::System::Object* _OriginalObject_k__BackingField;

  /// @brief Field <Path>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Path_k__BackingField, put = __cordl_internal_set__Path_k__BackingField)) ::StringW _Path_k__BackingField;

  /// @brief Field <Traced>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Traced_k__BackingField, put = __cordl_internal_set__Traced_k__BackingField)) bool _Traced_k__BackingField;

  static inline ::Newtonsoft::Json::Serialization::ErrorContext* New_ctor(::System::Object* originalObject, ::System::Object* member, ::StringW path, ::System::Exception* error);

  constexpr ::System::Exception* const& __cordl_internal_get__Error_k__BackingField() const;

  constexpr ::System::Exception*& __cordl_internal_get__Error_k__BackingField();

  constexpr bool const& __cordl_internal_get__Handled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Handled_k__BackingField();

  constexpr ::System::Object* const& __cordl_internal_get__Member_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__Member_k__BackingField();

  constexpr ::System::Object* const& __cordl_internal_get__OriginalObject_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__OriginalObject_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Path_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Path_k__BackingField();

  constexpr bool const& __cordl_internal_get__Traced_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Traced_k__BackingField();

  constexpr void __cordl_internal_set__Error_k__BackingField(::System::Exception* value);

  constexpr void __cordl_internal_set__Handled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Member_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__OriginalObject_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__Path_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Traced_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3ef2444, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* originalObject, ::System::Object* member, ::StringW path, ::System::Exception* error);

  /// @brief Method get_Error, addr 0x3ef2498, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_Error();

  /// @brief Method get_Handled, addr 0x3ef24b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_Handled();

  /// @brief Method get_Member, addr 0x3ef24a8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Member();

  /// @brief Method get_OriginalObject, addr 0x3ef24a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_OriginalObject();

  /// @brief Method get_Path, addr 0x3ef24b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Path();

  /// @brief Method get_Traced, addr 0x3ef2484, size 0x8, virtual false, abstract: false, final false
  inline bool get_Traced();

  /// @brief Method set_Handled, addr 0x3ef24c0, size 0xc, virtual false, abstract: false, final false
  inline void set_Handled(bool value);

  /// @brief Method set_Traced, addr 0x3ef248c, size 0xc, virtual false, abstract: false, final false
  inline void set_Traced(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorContext(ErrorContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorContext(ErrorContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10303 };

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
static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Traced_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Error_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____OriginalObject_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Member_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Path_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorContext, ____Handled_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ErrorContext, 0x40>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ErrorContext);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ErrorContext*, "Newtonsoft.Json.Serialization", "ErrorContext");
