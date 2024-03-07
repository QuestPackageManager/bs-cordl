#pragma once
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
struct MemberTypes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class __EventInfo__AddEventAdapter;
}
namespace System {
class Delegate;
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
class __EventInfo__AddEventAdapter;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::EventInfo);
MARK_REF_PTR_T(::System::Reflection::__EventInfo__AddEventAdapter);
// Type: ::AddEventAdapter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::EventInfo::AddEventAdapter*
class CORDL_TYPE __EventInfo__AddEventAdapter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x2639808, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* _this, ::System::Delegate* dele);

  static inline ::System::Reflection::__EventInfo__AddEventAdapter* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x26396d8, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventInfo__AddEventAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EventInfo__AddEventAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventInfo__AddEventAdapter(__EventInfo__AddEventAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventInfo__AddEventAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventInfo__AddEventAdapter(__EventInfo__AddEventAdapter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__EventInfo__AddEventAdapter, 0x80>, "Size mismatch!");

} // namespace System::Reflection
// Type: System.Reflection::EventInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::EventInfo*
class CORDL_TYPE EventInfo : public ::System::Reflection::MemberInfo {
public:
  // Declarations
  using AddEventAdapter = ::System::Reflection::__EventInfo__AddEventAdapter;

  __declspec(property(get = get_EventHandlerType))::System::Type* EventHandlerType;

  __declspec(property(get = get_MemberType))::System::Reflection::MemberTypes MemberType;

  /// @brief Field cached_add_event, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cached_add_event, put = __cordl_internal_set_cached_add_event))::System::Reflection::__EventInfo__AddEventAdapter* cached_add_event;

  /// @brief Method Equals, addr 0x2639564, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetAddMethod, addr 0x2639414, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetAddMethod();

  /// @brief Method GetAddMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);

  /// @brief Method GetEventFromHandle, addr 0x26395f0, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::Reflection::EventInfo* GetEventFromHandle(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType);

  /// @brief Method GetHashCode, addr 0x2639574, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetRaiseMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);

  /// @brief Method GetRemoveMethod, addr 0x2639428, size 0x14, virtual true, abstract: false, final true
  inline ::System::Reflection::MethodInfo* GetRemoveMethod();

  /// @brief Method GetRemoveMethod, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);

  static inline ::System::Reflection::EventInfo* New_ctor();

  constexpr ::System::Reflection::__EventInfo__AddEventAdapter*& __cordl_internal_get_cached_add_event();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::__EventInfo__AddEventAdapter*> const& __cordl_internal_get_cached_add_event() const;

  constexpr void __cordl_internal_set_cached_add_event(::System::Reflection::__EventInfo__AddEventAdapter* value);

  /// @brief Method .ctor, addr 0x26393fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_EventHandlerType, addr 0x263943c, size 0x128, virtual true, abstract: false, final false
  inline ::System::Type* get_EventHandlerType();

  /// @brief Method get_MemberType, addr 0x263940c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberTypes get_MemberType();

  /// @brief Method internal_from_handle_type, addr 0x26395ec, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Reflection::EventInfo* internal_from_handle_type(void* event_handle, void* type_handle);

  /// @brief Method op_Equality, addr 0x2639584, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right);

  /// @brief Method op_Inequality, addr 0x26395b0, size 0x3c, virtual false, abstract: false, final false
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

  /// @brief Field cached_add_event, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::__EventInfo__AddEventAdapter* ___cached_add_event;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::EventInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::EventInfo, ___cached_add_event) == 0x10, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::EventInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventInfo*, "System.Reflection", "EventInfo");
NEED_NO_BOX(::System::Reflection::__EventInfo__AddEventAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__EventInfo__AddEventAdapter*, "System.Reflection", "EventInfo/AddEventAdapter");
