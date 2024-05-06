#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceBuilder)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceBuilder__RefInstance;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceBuilder;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputDeviceBuilder__RefInstance;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder);
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance);
// Type: ::RefInstance
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::InputDeviceBuilder::RefInstance
#pragma pack(push, 0)
struct CORDL_TYPE __InputDeviceBuilder__RefInstance {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3174f78, size 0x8c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputDeviceBuilder__RefInstance();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance, 0x1>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputDeviceBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Layouts::InputDeviceBuilder
struct CORDL_TYPE InputDeviceBuilder {
public:
  // Declarations
  using RefInstance = ::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x28
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::InputSystem::Layouts::InputDeviceBuilder s_Instance;

  /// @brief Field s_InstanceRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_InstanceRef, put = setStaticF_s_InstanceRef)) int32_t s_InstanceRef;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddChildControl, addr 0x3173a1c, size 0x728, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* AddChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                   ::UnityEngine::InputSystem::InputControl* parent, ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                                                   ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem controlItem, int32_t childIndex, ::StringW nameOverride);

  /// @brief Method AddChildControlIfMissing, addr 0x3174144, size 0xb0, virtual false, abstract: false, final false
  inline void AddChildControlIfMissing(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                       ::UnityEngine::InputSystem::InputControl* parent, ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                       ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem);

  /// @brief Method AddChildControls, addr 0x3172888, size 0x68c, virtual false, abstract: false, final false
  inline void AddChildControls(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                               ::UnityEngine::InputSystem::InputControl* parent, ByRef<bool> haveChildrenUsingStateFromOtherControls);

  /// @brief Method AddParentDisplayNameRecursive, addr 0x3174ad0, size 0xb0, virtual false, abstract: false, final false
  static inline void AddParentDisplayNameRecursive(::UnityEngine::InputSystem::InputControl* control, ::System::Text::StringBuilder* stringBuilder, bool shortName);

  /// @brief Method AddProcessors, addr 0x317430c, size 0x23c, virtual false, abstract: false, final false
  static inline void AddProcessors(::UnityEngine::InputSystem::InputControl* control, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem, ::StringW layoutName);

  /// @brief Method ApplyUseStateFrom, addr 0x31736e8, size 0x19c, virtual false, abstract: false, final false
  static inline void ApplyUseStateFrom(::UnityEngine::InputSystem::InputControl* parent, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem,
                                       ::UnityEngine::InputSystem::Layouts::InputControlLayout* layout);

  /// @brief Method ChildControlOverridePath, addr 0x31741f4, size 0x90, virtual false, abstract: false, final false
  inline ::StringW ChildControlOverridePath(::UnityEngine::InputSystem::InputControl* parent, ::UnityEngine::InputSystem::Utilities::InternedString controlName);

  /// @brief Method ComputeStateLayout, addr 0x3172f14, size 0x7d4, virtual false, abstract: false, final false
  static inline void ComputeStateLayout(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method Dispose, addr 0x3172284, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FinalizeControlHierarchy, addr 0x3172060, size 0x198, virtual false, abstract: false, final false
  inline void FinalizeControlHierarchy();

  /// @brief Method FinalizeControlHierarchyRecursive, addr 0x3174b80, size 0x360, virtual false, abstract: false, final false
  inline void FinalizeControlHierarchyRecursive(::UnityEngine::InputSystem::InputControl* control, int32_t controlIndex,
                                                ::ArrayW<::UnityEngine::InputSystem::InputControl*, ::Array<::UnityEngine::InputSystem::InputControl*>*> allControls, bool noisy, bool dontReset);

  /// @brief Method FindOrLoadLayout, addr 0x317228c, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::StringW name);

  /// @brief Method Finish, addr 0x31721f8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* Finish();

  /// @brief Method InsertChildControl, addr 0x3174548, size 0x328, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* InsertChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variant,
                                                                      ::UnityEngine::InputSystem::InputControl* parent, ByRef<bool> haveChildrenUsingStateFromOtherControls,
                                                                      ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem);

  /// @brief Method InsertChildControlOverride, addr 0x3173884, size 0x198, virtual false, abstract: false, final false
  inline void InsertChildControlOverride(::UnityEngine::InputSystem::InputControl* parent, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem> controlItem);

  /// @brief Method InstantiateLayout, addr 0x31722e8, size 0x5a0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                     ::UnityEngine::InputSystem::Utilities::InternedString name, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method InstantiateLayout, addr 0x3171ff4, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                                                                     ::UnityEngine::InputSystem::Utilities::InternedString name, ::UnityEngine::InputSystem::InputControl* parent);

  /// @brief Method Ref, addr 0x3174f24, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance Ref();

  /// @brief Method Reset, addr 0x3172210, size 0x74, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetDisplayName, addr 0x31748d0, size 0x200, virtual false, abstract: false, final false
  inline void SetDisplayName(::UnityEngine::InputSystem::InputControl* control, ::StringW longDisplayNameFromLayout, ::StringW shortDisplayNameFromLayout, bool shortName);

  /// @brief Method SetFormat, addr 0x3174284, size 0x88, virtual false, abstract: false, final false
  static inline void SetFormat(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem controlItem);

  /// @brief Method Setup, addr 0x3171e98, size 0x15c, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::InputSystem::Utilities::InternedString layout, ::UnityEngine::InputSystem::Utilities::InternedString variants,
                    ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);

  /// @brief Method ShiftChildIndicesInHierarchyOneUp, addr 0x3174870, size 0x60, virtual false, abstract: false, final false
  static inline void ShiftChildIndicesInHierarchyOneUp(::UnityEngine::InputSystem::InputDevice* device, int32_t startIndex, ::UnityEngine::InputSystem::InputControl* exceptControl);

  static inline ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder getStaticF_s_Instance();

  static inline int32_t getStaticF_s_InstanceRef();

  /// @brief Method get_instance, addr 0x3174ee0, size 0x44, virtual false, abstract: false, final false
  static inline ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder> get_instance();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  static inline void setStaticF_s_Instance(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder value);

  static inline void setStaticF_s_InstanceRef(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDeviceBuilder();

  // Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }, CppParam { name: "m_LayoutCacheRef", ty:
  // "::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance", modifiers: "", def_value: None }, CppParam { name: "m_ChildControlOverrides", ty:
  // "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_StateOffsetToControlMap", ty: "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: None }, CppParam { name: "m_StringBuilder", ty: "::System::Text::StringBuilder*",
  // modifiers: "", def_value: None }]
  constexpr InputDeviceBuilder(::UnityEngine::InputSystem::InputDevice* m_Device, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance m_LayoutCacheRef,
                               ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* m_ChildControlOverrides,
                               ::System::Collections::Generic::List_1<uint32_t>* m_StateOffsetToControlMap, ::System::Text::StringBuilder* m_StringBuilder) noexcept;

  /// @brief Field m_Device, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* m_Device;

  /// @brief Field m_LayoutCacheRef, offset: 0x8, size: 0x1, def value: None
  ::UnityEngine::InputSystem::Layouts::__InputControlLayout__CacheRefInstance m_LayoutCacheRef;

  /// @brief Field m_ChildControlOverrides, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>* m_ChildControlOverrides;

  /// @brief Field m_StateOffsetToControlMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* m_StateOffsetToControlMap;

  /// @brief Field m_StringBuilder, offset: 0x20, size: 0x8, def value: None
  ::System::Text::StringBuilder* m_StringBuilder;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field kSizeForControlUsingStateFromOtherControl offset 0xffffffff size 0x4
  static constexpr uint32_t kSizeForControlUsingStateFromOtherControl{ static_cast<uint32_t>(0x10101ffu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_Device) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_LayoutCacheRef) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_ChildControlOverrides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_StateOffsetToControlMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_StringBuilder) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::__InputDeviceBuilder__RefInstance, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder/RefInstance");
