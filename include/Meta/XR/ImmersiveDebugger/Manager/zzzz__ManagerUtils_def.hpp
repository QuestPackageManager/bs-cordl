#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/ManagerUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ManagerUtils)
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class ManagerUtils_RegisterMember_1;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IDebugUIPanel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class ManagerUtils;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
template <typename T> class ManagerUtils_RegisterMember_1;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils);
MARK_GEN_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1);
// Dependencies System.MulticastDelegate
namespace Meta::XR::ImmersiveDebugger::Manager {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils/RegisterMember`1<T>
class CORDL_TYPE ManagerUtils_RegisterMember_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController, T member, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                                             ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController, T member, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                     ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle);

  static inline ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagerUtils_RegisterMember_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManagerUtils_RegisterMember_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManagerUtils_RegisterMember_1(ManagerUtils_RegisterMember_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManagerUtils_RegisterMember_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManagerUtils_RegisterMember_1(ManagerUtils_RegisterMember_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18420 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.ManagerUtils
class CORDL_TYPE ManagerUtils : public ::System::Object {
public:
  // Declarations
  template <typename T> using RegisterMember_1 = ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>;

  /// @brief Method RebuildInspectorForType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  static inline void RebuildInspectorForType(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* panel, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache, ::System::Type* type,
                                             ::System::Collections::Generic::List_1<::System::ValueTuple_2<T, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* memberPairs,
                                             ::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1<T>* memberRegistration);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ManagerUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ManagerUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ManagerUtils(ManagerUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ManagerUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ManagerUtils(ManagerUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils*, "Meta.XR.ImmersiveDebugger.Manager", "ManagerUtils");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::XR::ImmersiveDebugger::Manager::ManagerUtils_RegisterMember_1, "Meta.XR.ImmersiveDebugger.Manager", "ManagerUtils/RegisterMember`1");
