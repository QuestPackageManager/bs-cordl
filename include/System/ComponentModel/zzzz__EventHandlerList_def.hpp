#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventHandlerList)
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class Component;
}
namespace System::ComponentModel {
class __EventHandlerList__ListEntry;
}
// Forward declare root types
namespace System::ComponentModel {
class EventHandlerList;
}
namespace System::ComponentModel {
class __EventHandlerList__ListEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EventHandlerList);
MARK_REF_PTR_T(::System::ComponentModel::__EventHandlerList__ListEntry);
// Type: ::ListEntry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9394))
// CS Name: ::EventHandlerList::ListEntry*
class CORDL_TYPE __EventHandlerList__ListEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _next, offset 0x10, size 0x8
  __declspec(property(get = __get__next, put = __set__next))::System::ComponentModel::__EventHandlerList__ListEntry* _next;

  /// @brief Field _key, offset 0x18, size 0x8
  __declspec(property(get = __get__key, put = __set__key))::System::Object* _key;

  /// @brief Field _handler, offset 0x20, size 0x8
  __declspec(property(get = __get__handler, put = __set__handler))::System::Delegate* _handler;

  constexpr ::System::ComponentModel::__EventHandlerList__ListEntry*& __get__next();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__EventHandlerList__ListEntry*> const& __get__next() const;

  constexpr void __set__next(::System::ComponentModel::__EventHandlerList__ListEntry* value);

  constexpr ::System::Object*& __get__key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__key() const;

  constexpr void __set__key(::System::Object* value);

  constexpr ::System::Delegate*& __get__handler();

  constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> const& __get__handler() const;

  constexpr void __set__handler(::System::Delegate* value);

  // Ctor Parameters [CppParam { name: "", ty: "__EventHandlerList__ListEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventHandlerList__ListEntry(__EventHandlerList__ListEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventHandlerList__ListEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventHandlerList__ListEntry(__EventHandlerList__ListEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventHandlerList__ListEntry();

public:
  /// @brief Field _next, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::__EventHandlerList__ListEntry* ____next;

  /// @brief Field _key, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____key;

  /// @brief Field _handler, offset: 0x20, size: 0x8, def value: None
  ::System::Delegate* ____handler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__EventHandlerList__ListEntry, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventHandlerList__ListEntry, ____next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventHandlerList__ListEntry, ____key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::__EventHandlerList__ListEntry, ____handler) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::EventHandlerList
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9395))
// CS Name: ::System.ComponentModel::EventHandlerList*
class CORDL_TYPE EventHandlerList : public ::System::Object {
public:
  // Declarations
  using ListEntry = ::System::ComponentModel::__EventHandlerList__ListEntry;

  /// @brief Field _head, offset 0x10, size 0x8
  __declspec(property(get = __get__head, put = __set__head))::System::ComponentModel::__EventHandlerList__ListEntry* _head;

  /// @brief Field _parent, offset 0x18, size 0x8
  __declspec(property(get = __get__parent, put = __set__parent))::System::ComponentModel::Component* _parent;

  __declspec(property(get = get_Item))::System::Delegate* Item[];

  constexpr ::System::ComponentModel::__EventHandlerList__ListEntry*& __get__head();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__EventHandlerList__ListEntry*> const& __get__head() const;

  constexpr void __set__head(::System::ComponentModel::__EventHandlerList__ListEntry* value);

  constexpr ::System::ComponentModel::Component*& __get__parent();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Component*> const& __get__parent() const;

  constexpr void __set__parent(::System::ComponentModel::Component* value);

  /// @brief Method get_Item, addr 0x2904dbc, size 0x60, virtual false, abstract: false, final false
  inline ::System::Delegate* get_Item(::System::Object* key);

  /// @brief Method Find, addr 0x2904e1c, size 0x18, virtual false, abstract: false, final false
  inline ::System::ComponentModel::__EventHandlerList__ListEntry* Find(::System::Object* key);

  // Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventHandlerList(EventHandlerList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventHandlerList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventHandlerList(EventHandlerList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventHandlerList();

public:
  /// @brief Field _head, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::__EventHandlerList__ListEntry* ____head;

  /// @brief Field _parent, offset: 0x18, size: 0x8, def value: None
  ::System::ComponentModel::Component* ____parent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EventHandlerList, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::EventHandlerList, ____head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::EventHandlerList, ____parent) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EventHandlerList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventHandlerList*, "System.ComponentModel", "EventHandlerList");
NEED_NO_BOX(::System::ComponentModel::__EventHandlerList__ListEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__EventHandlerList__ListEntry*, "System.ComponentModel", "EventHandlerList/ListEntry");
