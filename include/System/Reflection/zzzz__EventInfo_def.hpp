#pragma once
// IWYU pragma private; include "System/Reflection/EventInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventInfo)
namespace Mono {
struct RuntimeEventHandle;
}
namespace System::Reflection {
class EventInfo_AddEventAdapter;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Delegate;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class EventInfo_AddEventAdapter;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::EventInfo);
MARK_REF_PTR_T(::System::Reflection::EventInfo_AddEventAdapter);
// Dependencies System.MulticastDelegate
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.EventInfo/AddEventAdapter
class CORDL_TYPE EventInfo_AddEventAdapter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x59ce040, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* _this, ::System::Delegate* dele);

  static inline ::System::Reflection::EventInfo_AddEventAdapter* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x59cdef8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventInfo_AddEventAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventInfo_AddEventAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventInfo_AddEventAdapter(EventInfo_AddEventAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventInfo_AddEventAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventInfo_AddEventAdapter(EventInfo_AddEventAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3485 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::EventInfo_AddEventAdapter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
// Dependencies System.Reflection.MemberInfo
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.EventInfo
class CORDL_TYPE EventInfo : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  using AddEventAdapter = ::System::Reflection::EventInfo_AddEventAdapter;

  __declspec(property(get = get_EventHandlerType)) ::System::Type* EventHandlerType;

  __declspec(property(get = get_MemberType)) ::System::Reflection::MemberTypes MemberType;

  /// @brief Field cached_add_event, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cached_add_event, put = __cordl_internal_set_cached_add_event)) ::System::Reflection::EventInfo_AddEventAdapter* cached_add_event;

  /// @brief Method Equals, addr 0x59cddcc, size 0xc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetAddMethod, addr 0x59cdc94, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetAddMethod();

  /// @brief Method GetAddMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);

  /// @brief Method GetEventFromHandle, addr 0x59cde78, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Reflection::EventInfo* GetEventFromHandle(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType);

  /// @brief Method GetHashCode, addr 0x59cdde4, size 0x14, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetRaiseMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);

  /// @brief Method GetRemoveMethod, addr 0x59cdca8, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetRemoveMethod();

  /// @brief Method GetRemoveMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);

  static inline ::System::Reflection::EventInfo* New_ctor();

  constexpr ::System::Reflection::EventInfo_AddEventAdapter* const& __cordl_internal_get_cached_add_event() const;

  constexpr ::System::Reflection::EventInfo_AddEventAdapter*& __cordl_internal_get_cached_add_event();

  constexpr void __cordl_internal_set_cached_add_event(::System::Reflection::EventInfo_AddEventAdapter* value);

  /// @brief Method .ctor, addr 0x59cdc84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EventHandlerType, addr 0x59cdcbc, size 0x110, virtual true, abstract: false, final false
  inline ::System::Type* get_EventHandlerType();

  /// @brief Method get_MemberType, addr 0x59cdc8c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method internal_from_handle_type, addr 0x59cde74, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::EventInfo* internal_from_handle_type(::System::IntPtr event_handle, ::System::IntPtr type_handle);

  /// @brief Method op_Equality, addr 0x59cde0c, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right);

  /// @brief Method op_Inequality, addr 0x59cde38, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventInfo(EventInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventInfo(EventInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3486 };

  /// @brief Field cached_add_event, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::EventInfo_AddEventAdapter* ___cached_add_event;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::EventInfo, ___cached_add_event) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::EventInfo, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::EventInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventInfo*, "System.Reflection", "EventInfo");
NEED_NO_BOX(::System::Reflection::EventInfo_AddEventAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventInfo_AddEventAdapter*, "System.Reflection", "EventInfo/AddEventAdapter");
