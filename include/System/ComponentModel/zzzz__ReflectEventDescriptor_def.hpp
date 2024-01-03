#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__EventDescriptor_def.hpp"
CORDL_MODULE_EXPORT(ReflectEventDescriptor)
namespace System::Collections {
class IList;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ReflectEventDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ReflectEventDescriptor);
// Type: System.ComponentModel::ReflectEventDescriptor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9423))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9450))
// CS Name: ::System.ComponentModel::ReflectEventDescriptor*
class CORDL_TYPE ReflectEventDescriptor : public ::System::ComponentModel::EventDescriptor {
public:
  // Declarations
  /// @brief Field _type, offset 0x60, size 0x8
  __declspec(property(get = __get__type, put = __set__type))::System::Type* _type;

  /// @brief Field _componentClass, offset 0x68, size 0x8
  __declspec(property(get = __get__componentClass, put = __set__componentClass))::System::Type* _componentClass;

  /// @brief Field _addMethod, offset 0x70, size 0x8
  __declspec(property(get = __get__addMethod, put = __set__addMethod))::System::Reflection::MethodInfo* _addMethod;

  /// @brief Field _removeMethod, offset 0x78, size 0x8
  __declspec(property(get = __get__removeMethod, put = __set__removeMethod))::System::Reflection::MethodInfo* _removeMethod;

  /// @brief Field _realEvent, offset 0x80, size 0x8
  __declspec(property(get = __get__realEvent, put = __set__realEvent))::System::Reflection::EventInfo* _realEvent;

  /// @brief Field _filledMethods, offset 0x88, size 0x1
  __declspec(property(get = __get__filledMethods, put = __set__filledMethods)) bool _filledMethods;

  constexpr ::System::Type*& __get__type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__type() const;

  constexpr void __set__type(::System::Type* value);

  constexpr ::System::Type*& __get__componentClass();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__componentClass() const;

  constexpr void __set__componentClass(::System::Type* value);

  constexpr ::System::Reflection::MethodInfo*& __get__addMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __get__addMethod() const;

  constexpr void __set__addMethod(::System::Reflection::MethodInfo* value);

  constexpr ::System::Reflection::MethodInfo*& __get__removeMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __get__removeMethod() const;

  constexpr void __set__removeMethod(::System::Reflection::MethodInfo* value);

  constexpr ::System::Reflection::EventInfo*& __get__realEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::EventInfo*> const& __get__realEvent() const;

  constexpr void __set__realEvent(::System::Reflection::EventInfo* value);

  constexpr bool& __get__filledMethods();

  constexpr bool const& __get__filledMethods() const;

  constexpr void __set__filledMethods(bool value);

  static inline ::System::ComponentModel::ReflectEventDescriptor* New_ctor(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo);

  /// @brief Method .ctor, addr 0x2916c34, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* componentClass, ::System::Reflection::EventInfo* eventInfo);

  /// @brief Method FillAttributes, addr 0x2916dac, size 0x64, virtual true, abstract: false, final false
  inline void FillAttributes(::System::Collections::IList* attributes);

  /// @brief Method FillEventInfoAttribute, addr 0x2917258, size 0x328, virtual false, abstract: false, final false
  inline void FillEventInfoAttribute(::System::Reflection::EventInfo* realEventInfo, ::System::Collections::IList* attributes);

  /// @brief Method FillMethods, addr 0x2916e10, size 0x448, virtual false, abstract: false, final false
  inline void FillMethods();

  /// @brief Method FillSingleMethodAttribute, addr 0x2917580, size 0x368, virtual false, abstract: false, final false
  inline void FillSingleMethodAttribute(::System::Reflection::MethodInfo* realMethodInfo, ::System::Collections::IList* attributes);

  // Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectEventDescriptor(ReflectEventDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectEventDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectEventDescriptor(ReflectEventDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectEventDescriptor();

public:
  /// @brief Field _type, offset: 0x60, size: 0x8, def value: None
  ::System::Type* ____type;

  /// @brief Field _componentClass, offset: 0x68, size: 0x8, def value: None
  ::System::Type* ____componentClass;

  /// @brief Field _addMethod, offset: 0x70, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____addMethod;

  /// @brief Field _removeMethod, offset: 0x78, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ____removeMethod;

  /// @brief Field _realEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Reflection::EventInfo* ____realEvent;

  /// @brief Field _filledMethods, offset: 0x88, size: 0x1, def value: None
  bool ____filledMethods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ReflectEventDescriptor, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____type) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____componentClass) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____addMethod) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____removeMethod) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____realEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ReflectEventDescriptor, ____filledMethods) == 0x88, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ReflectEventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ReflectEventDescriptor*, "System.ComponentModel", "ReflectEventDescriptor");
