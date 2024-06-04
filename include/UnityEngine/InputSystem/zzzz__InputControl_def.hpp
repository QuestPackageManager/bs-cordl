#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateBlock_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputControl)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBlock;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct __InputControl__ControlFlags;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
struct __InputControl__ControlFlags;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::__InputControl__ControlFlags);
MARK_REF_PTR_T(::UnityEngine::InputSystem::InputControl);
// Type: ::ControlFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: true
// CS Name: ::InputControl::ControlFlags
struct CORDL_TYPE __InputControl__ControlFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputControl__ControlFlags_Unwrapped
  enum struct ____InputControl__ControlFlags_Unwrapped : int32_t {
    __E_ConfigUpToDate = static_cast<int32_t>(0x1),
    __E_IsNoisy = static_cast<int32_t>(0x2),
    __E_IsSynthetic = static_cast<int32_t>(0x4),
    __E_IsButton = static_cast<int32_t>(0x8),
    __E_DontReset = static_cast<int32_t>(0x10),
    __E_SetupFinished = static_cast<int32_t>(0x20),
    __E_UsesStateFromOtherControl = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputControl__ControlFlags_Unwrapped() const noexcept {
    return static_cast<____InputControl__ControlFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputControl__ControlFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputControl__ControlFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ConfigUpToDate value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const ConfigUpToDate;

  /// @brief Field DontReset value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const DontReset;

  /// @brief Field IsButton value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const IsButton;

  /// @brief Field IsNoisy value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const IsNoisy;

  /// @brief Field IsSynthetic value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const IsSynthetic;

  /// @brief Field SetupFinished value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const SetupFinished;

  /// @brief Field UsesStateFromOtherControl value: static_cast<int32_t>(0x40)
  static ::UnityEngine::InputSystem::__InputControl__ControlFlags const UsesStateFromOtherControl;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::__InputControl__ControlFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::__InputControl__ControlFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputControl
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 220, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem::InputControl*
class CORDL_TYPE InputControl : public ::System::Object {
public:
  // Declarations
  using ControlFlags = ::UnityEngine::InputSystem::__InputControl__ControlFlags;

  __declspec(property(get = get_Item))::UnityEngine::InputSystem::InputControl* Item[];

  __declspec(property(get = get_aliases))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> aliases;

  __declspec(property(get = get_children))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> children;

  __declspec(property(get = get_currentStatePtr))::cordl_internals::Ptr<void> currentStatePtr;

  __declspec(property(get = get_defaultStatePtr))::cordl_internals::Ptr<void> defaultStatePtr;

  __declspec(property(get = get_device))::UnityEngine::InputSystem::InputDevice* device;

  __declspec(property(get = get_displayName, put = set_displayName))::StringW displayName;

  __declspec(property(get = get_dontReset, put = set_dontReset)) bool dontReset;

  __declspec(property(get = get_hasDefaultState)) bool hasDefaultState;

  __declspec(property(get = get_isButton, put = set_isButton)) bool isButton;

  __declspec(property(get = get_isConfigUpToDate, put = set_isConfigUpToDate)) bool isConfigUpToDate;

  __declspec(property(get = get_isSetupFinished, put = set_isSetupFinished)) bool isSetupFinished;

  __declspec(property(get = get_layout))::StringW layout;

  /// @brief Field m_AliasCount, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AliasCount, put = __cordl_internal_set_m_AliasCount)) int32_t m_AliasCount;

  /// @brief Field m_AliasStartIndex, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AliasStartIndex, put = __cordl_internal_set_m_AliasStartIndex)) int32_t m_AliasStartIndex;

  /// @brief Field m_CachedValueIsStale, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CachedValueIsStale, put = __cordl_internal_set_m_CachedValueIsStale)) bool m_CachedValueIsStale;

  /// @brief Field m_ChildCount, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildCount, put = __cordl_internal_set_m_ChildCount)) int32_t m_ChildCount;

  /// @brief Field m_ChildStartIndex, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ChildStartIndex, put = __cordl_internal_set_m_ChildStartIndex)) int32_t m_ChildStartIndex;

  /// @brief Field m_ControlFlags, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ControlFlags, put = __cordl_internal_set_m_ControlFlags))::UnityEngine::InputSystem::__InputControl__ControlFlags m_ControlFlags;

  /// @brief Field m_DefaultState, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DefaultState, put = __cordl_internal_set_m_DefaultState))::UnityEngine::InputSystem::Utilities::PrimitiveValue m_DefaultState;

  /// @brief Field m_Device, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Device, put = __cordl_internal_set_m_Device))::UnityEngine::InputSystem::InputDevice* m_Device;

  /// @brief Field m_DisplayName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayName, put = __cordl_internal_set_m_DisplayName))::StringW m_DisplayName;

  /// @brief Field m_DisplayNameFromLayout, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayNameFromLayout, put = __cordl_internal_set_m_DisplayNameFromLayout))::StringW m_DisplayNameFromLayout;

  /// @brief Field m_Layout, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Layout, put = __cordl_internal_set_m_Layout))::UnityEngine::InputSystem::Utilities::InternedString m_Layout;

  /// @brief Field m_MaxValue, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_MaxValue, put = __cordl_internal_set_m_MaxValue))::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MaxValue;

  /// @brief Field m_MinValue, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_MinValue, put = __cordl_internal_set_m_MinValue))::UnityEngine::InputSystem::Utilities::PrimitiveValue m_MinValue;

  /// @brief Field m_Name, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::UnityEngine::InputSystem::Utilities::InternedString m_Name;

  /// @brief Field m_OptimizedControlDataType, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OptimizedControlDataType,
                      put = __cordl_internal_set_m_OptimizedControlDataType))::UnityEngine::InputSystem::Utilities::FourCC m_OptimizedControlDataType;

  /// @brief Field m_Parent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parent, put = __cordl_internal_set_m_Parent))::UnityEngine::InputSystem::InputControl* m_Parent;

  /// @brief Field m_Path, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Path, put = __cordl_internal_set_m_Path))::StringW m_Path;

  /// @brief Field m_ShortDisplayName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShortDisplayName, put = __cordl_internal_set_m_ShortDisplayName))::StringW m_ShortDisplayName;

  /// @brief Field m_ShortDisplayNameFromLayout, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShortDisplayNameFromLayout, put = __cordl_internal_set_m_ShortDisplayNameFromLayout))::StringW m_ShortDisplayNameFromLayout;

  /// @brief Field m_StateBlock, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_StateBlock, put = __cordl_internal_set_m_StateBlock))::UnityEngine::InputSystem::LowLevel::InputStateBlock m_StateBlock;

  /// @brief Field m_UnprocessedCachedValueIsStale, offset 0xa5, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UnprocessedCachedValueIsStale, put = __cordl_internal_set_m_UnprocessedCachedValueIsStale)) bool m_UnprocessedCachedValueIsStale;

  /// @brief Field m_UsageCount, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UsageCount, put = __cordl_internal_set_m_UsageCount)) int32_t m_UsageCount;

  /// @brief Field m_UsageStartIndex, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_UsageStartIndex, put = __cordl_internal_set_m_UsageStartIndex)) int32_t m_UsageStartIndex;

  /// @brief Field m_Variants, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Variants, put = __cordl_internal_set_m_Variants))::UnityEngine::InputSystem::Utilities::InternedString m_Variants;

  __declspec(property(get = get_magnitude)) float_t magnitude;

  __declspec(property(get = get_name))::StringW name;

  __declspec(property(get = get_noiseMaskPtr))::cordl_internals::Ptr<void> noiseMaskPtr;

  __declspec(property(get = get_noisy, put = set_noisy)) bool noisy;

  __declspec(property(get = get_optimizedControlDataType))::UnityEngine::InputSystem::Utilities::FourCC optimizedControlDataType;

  __declspec(property(get = get_parent))::UnityEngine::InputSystem::InputControl* parent;

  __declspec(property(get = get_path))::StringW path;

  __declspec(property(get = get_previousFrameStatePtr))::cordl_internals::Ptr<void> previousFrameStatePtr;

  __declspec(property(get = get_shortDisplayName, put = set_shortDisplayName))::StringW shortDisplayName;

  __declspec(property(get = get_stateBlock))::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock;

  __declspec(property(get = get_stateOffsetRelativeToDeviceRoot)) uint32_t stateOffsetRelativeToDeviceRoot;

  __declspec(property(get = get_synthetic, put = set_synthetic)) bool synthetic;

  __declspec(property(get = get_usages))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> usages;

  __declspec(property(get = get_usesStateFromOtherControl, put = set_usesStateFromOtherControl)) bool usesStateFromOtherControl;

  __declspec(property(get = get_valueSizeInBytes)) int32_t valueSizeInBytes;

  __declspec(property(get = get_valueType))::System::Type* valueType;

  __declspec(property(get = get_variants))::StringW variants;

  /// @brief Method AddProcessor, addr 0x30f39c8, size 0x4, virtual true, abstract: false, final false
  inline void AddProcessor(::System::Object* first);

  /// @brief Method ApplyParameterChanges, addr 0x30f2e6c, size 0x90, virtual false, abstract: false, final false
  inline void ApplyParameterChanges();

  /// @brief Method BakeOffsetIntoStateBlockRecursive, addr 0x30f386c, size 0xb0, virtual false, abstract: false, final false
  inline void BakeOffsetIntoStateBlockRecursive(uint32_t offset);

  /// @brief Method CalculateOptimizedControlDataType, addr 0x30f2e64, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC CalculateOptimizedControlDataType();

  /// @brief Method CallFinishSetupRecursive, addr 0x30f37b0, size 0xbc, virtual false, abstract: false, final false
  inline void CallFinishSetupRecursive();

  /// @brief Method CompareValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr);

  /// @brief Method DebuggerDisplay, addr 0x30f26a8, size 0x124, virtual false, abstract: false, final false
  inline ::StringW DebuggerDisplay();

  /// @brief Method EnsureOptimizationTypeHasNotChanged, addr 0x30f32c8, size 0x428, virtual false, abstract: false, final false
  inline void EnsureOptimizationTypeHasNotChanged();

  /// @brief Method EvaluateMagnitude, addr 0x30f2614, size 0x2c, virtual false, abstract: false, final false
  inline float_t EvaluateMagnitude();

  /// @brief Method EvaluateMagnitude, addr 0x30f285c, size 0x8, virtual true, abstract: false, final false
  inline float_t EvaluateMagnitude(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method FinishSetup, addr 0x30f2ba8, size 0x4, virtual true, abstract: false, final false
  inline void FinishSetup();

  /// @brief Method GetChildControl, addr 0x30f29b8, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* GetChildControl(::StringW path);

  /// @brief Method GetChildControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> inline TControl GetChildControl(::StringW path);

  /// @brief Method GetDeviceIndex, addr 0x30f2bd8, size 0x1bc, virtual false, abstract: false, final false
  inline int32_t GetDeviceIndex();

  /// @brief Method IsValueConsideredPressed, addr 0x30f391c, size 0xac, virtual false, abstract: false, final false
  inline bool IsValueConsideredPressed(float_t value);

  /// @brief Method MakeChildPath, addr 0x30f2ad4, size 0xac, virtual false, abstract: false, final false
  inline ::StringW MakeChildPath(::StringW path);

  /// @brief Method MarkAsStale, addr 0x30f39cc, size 0xc, virtual false, abstract: false, final false
  inline void MarkAsStale();

  /// @brief Method MarkAsStaleRecursively, addr 0x30f2efc, size 0x178, virtual false, abstract: false, final false
  inline void MarkAsStaleRecursively();

  static inline ::UnityEngine::InputSystem::InputControl* New_ctor();

  /// @brief Method ReadValueFromBufferAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize);

  /// @brief Method ReadValueFromStateAsObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr);

  /// @brief Method ReadValueFromStateIntoBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize);

  /// @brief Method RefreshConfiguration, addr 0x30f2bd4, size 0x4, virtual true, abstract: false, final false
  inline void RefreshConfiguration();

  /// @brief Method RefreshConfigurationIfNeeded, addr 0x30f20d4, size 0x34, virtual false, abstract: false, final false
  inline void RefreshConfigurationIfNeeded();

  /// @brief Method SetOptimizedControlDataType, addr 0x30f3074, size 0x78, virtual false, abstract: false, final false
  inline void SetOptimizedControlDataType();

  /// @brief Method SetOptimizedControlDataTypeRecursively, addr 0x30f30ec, size 0x1dc, virtual false, abstract: false, final false
  inline void SetOptimizedControlDataTypeRecursively();

  /// @brief Method ToString, addr 0x30f2640, size 0x68, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetChildControl, addr 0x30f2934, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* TryGetChildControl(::StringW path);

  /// @brief Method TryGetChildControl, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TControl> inline TControl TryGetChildControl(::StringW path);

  /// @brief Method WriteValueFromBufferIntoState, addr 0x30f2864, size 0x68, virtual true, abstract: false, final false
  inline void WriteValueFromBufferIntoState(::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize, ::cordl_internals::Ptr<void> statePtr);

  /// @brief Method WriteValueFromObjectIntoState, addr 0x30f28cc, size 0x68, virtual true, abstract: false, final false
  inline void WriteValueFromObjectIntoState(::System::Object* value, ::cordl_internals::Ptr<void> statePtr);

  constexpr int32_t const& __cordl_internal_get_m_AliasCount() const;

  constexpr int32_t& __cordl_internal_get_m_AliasCount();

  constexpr int32_t const& __cordl_internal_get_m_AliasStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_AliasStartIndex();

  constexpr bool const& __cordl_internal_get_m_CachedValueIsStale() const;

  constexpr bool& __cordl_internal_get_m_CachedValueIsStale();

  constexpr int32_t const& __cordl_internal_get_m_ChildCount() const;

  constexpr int32_t& __cordl_internal_get_m_ChildCount();

  constexpr int32_t const& __cordl_internal_get_m_ChildStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_ChildStartIndex();

  constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags const& __cordl_internal_get_m_ControlFlags() const;

  constexpr ::UnityEngine::InputSystem::__InputControl__ControlFlags& __cordl_internal_get_m_ControlFlags();

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __cordl_internal_get_m_DefaultState() const;

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __cordl_internal_get_m_DefaultState();

  constexpr ::UnityEngine::InputSystem::InputDevice*& __cordl_internal_get_m_Device();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> const& __cordl_internal_get_m_Device() const;

  constexpr ::StringW const& __cordl_internal_get_m_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_m_DisplayName();

  constexpr ::StringW const& __cordl_internal_get_m_DisplayNameFromLayout() const;

  constexpr ::StringW& __cordl_internal_get_m_DisplayNameFromLayout();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Layout() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Layout();

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __cordl_internal_get_m_MaxValue() const;

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __cordl_internal_get_m_MaxValue();

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue const& __cordl_internal_get_m_MinValue() const;

  constexpr ::UnityEngine::InputSystem::Utilities::PrimitiveValue& __cordl_internal_get_m_MinValue();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& __cordl_internal_get_m_OptimizedControlDataType() const;

  constexpr ::UnityEngine::InputSystem::Utilities::FourCC& __cordl_internal_get_m_OptimizedControlDataType();

  constexpr ::UnityEngine::InputSystem::InputControl*& __cordl_internal_get_m_Parent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_m_Parent() const;

  constexpr ::StringW const& __cordl_internal_get_m_Path() const;

  constexpr ::StringW& __cordl_internal_get_m_Path();

  constexpr ::StringW const& __cordl_internal_get_m_ShortDisplayName() const;

  constexpr ::StringW& __cordl_internal_get_m_ShortDisplayName();

  constexpr ::StringW const& __cordl_internal_get_m_ShortDisplayNameFromLayout() const;

  constexpr ::StringW& __cordl_internal_get_m_ShortDisplayNameFromLayout();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock const& __cordl_internal_get_m_StateBlock() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputStateBlock& __cordl_internal_get_m_StateBlock();

  constexpr bool const& __cordl_internal_get_m_UnprocessedCachedValueIsStale() const;

  constexpr bool& __cordl_internal_get_m_UnprocessedCachedValueIsStale();

  constexpr int32_t const& __cordl_internal_get_m_UsageCount() const;

  constexpr int32_t& __cordl_internal_get_m_UsageCount();

  constexpr int32_t const& __cordl_internal_get_m_UsageStartIndex() const;

  constexpr int32_t& __cordl_internal_get_m_UsageStartIndex();

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString const& __cordl_internal_get_m_Variants() const;

  constexpr ::UnityEngine::InputSystem::Utilities::InternedString& __cordl_internal_get_m_Variants();

  constexpr void __cordl_internal_set_m_AliasCount(int32_t value);

  constexpr void __cordl_internal_set_m_AliasStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CachedValueIsStale(bool value);

  constexpr void __cordl_internal_set_m_ChildCount(int32_t value);

  constexpr void __cordl_internal_set_m_ChildStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ControlFlags(::UnityEngine::InputSystem::__InputControl__ControlFlags value);

  constexpr void __cordl_internal_set_m_DefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  constexpr void __cordl_internal_set_m_Device(::UnityEngine::InputSystem::InputDevice* value);

  constexpr void __cordl_internal_set_m_DisplayName(::StringW value);

  constexpr void __cordl_internal_set_m_DisplayNameFromLayout(::StringW value);

  constexpr void __cordl_internal_set_m_Layout(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set_m_MaxValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  constexpr void __cordl_internal_set_m_MinValue(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::InputSystem::Utilities::InternedString value);

  constexpr void __cordl_internal_set_m_OptimizedControlDataType(::UnityEngine::InputSystem::Utilities::FourCC value);

  constexpr void __cordl_internal_set_m_Parent(::UnityEngine::InputSystem::InputControl* value);

  constexpr void __cordl_internal_set_m_Path(::StringW value);

  constexpr void __cordl_internal_set_m_ShortDisplayName(::StringW value);

  constexpr void __cordl_internal_set_m_ShortDisplayNameFromLayout(::StringW value);

  constexpr void __cordl_internal_set_m_StateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock value);

  constexpr void __cordl_internal_set_m_UnprocessedCachedValueIsStale(bool value);

  constexpr void __cordl_internal_set_m_UsageCount(int32_t value);

  constexpr void __cordl_internal_set_m_UsageStartIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Variants(::UnityEngine::InputSystem::Utilities::InternedString value);

  /// @brief Method .ctor, addr 0x30f2b80, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x30f2528, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_Item(::StringW path);

  /// @brief Method get_aliases, addr 0x30f23a0, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_aliases();

  /// @brief Method get_children, addr 0x30f22c0, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_children();

  /// @brief Method get_currentStatePtr, addr 0x30f2848, size 0x14, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_currentStatePtr();

  /// @brief Method get_defaultStatePtr, addr 0x30f2da8, size 0x48, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_defaultStatePtr();

  /// @brief Method get_device, addr 0x30f22b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputDevice* get_device();

  /// @brief Method get_displayName, addr 0x30f207c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_dontReset, addr 0x30f3740, size 0xc, virtual false, abstract: false, final false
  inline bool get_dontReset();

  /// @brief Method get_hasDefaultState, addr 0x30f3790, size 0x20, virtual false, abstract: false, final false
  inline bool get_hasDefaultState();

  /// @brief Method get_isButton, addr 0x30f3718, size 0xc, virtual false, abstract: false, final false
  inline bool get_isButton();

  /// @brief Method get_isConfigUpToDate, addr 0x30f2bac, size 0xc, virtual false, abstract: false, final false
  inline bool get_isConfigUpToDate();

  /// @brief Method get_isSetupFinished, addr 0x30f36f0, size 0xc, virtual false, abstract: false, final false
  inline bool get_isSetupFinished();

  /// @brief Method get_layout, addr 0x30f2290, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_layout();

  /// @brief Method get_magnitude, addr 0x30f2610, size 0x4, virtual false, abstract: false, final false
  inline float_t get_magnitude();

  /// @brief Method get_name, addr 0x30f206c, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_noiseMaskPtr, addr 0x30f2df0, size 0x48, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_noiseMaskPtr();

  /// @brief Method get_noisy, addr 0x30f241c, size 0xc, virtual false, abstract: false, final false
  inline bool get_noisy();

  /// @brief Method get_optimizedControlDataType, addr 0x30f2e5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_optimizedControlDataType();

  /// @brief Method get_parent, addr 0x30f22b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::InputControl* get_parent();

  /// @brief Method get_path, addr 0x30f215c, size 0x40, virtual false, abstract: false, final false
  inline ::StringW get_path();

  /// @brief Method get_previousFrameStatePtr, addr 0x30f2d94, size 0x14, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_previousFrameStatePtr();

  /// @brief Method get_shortDisplayName, addr 0x30f2110, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_shortDisplayName();

  /// @brief Method get_stateBlock, addr 0x30f2410, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::LowLevel::InputStateBlock get_stateBlock();

  /// @brief Method get_stateOffsetRelativeToDeviceRoot, addr 0x30f2e38, size 0x24, virtual false, abstract: false, final false
  inline uint32_t get_stateOffsetRelativeToDeviceRoot();

  /// @brief Method get_synthetic, addr 0x30f2500, size 0xc, virtual false, abstract: false, final false
  inline bool get_synthetic();

  /// @brief Method get_usages, addr 0x30f2330, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::InternedString> get_usages();

  /// @brief Method get_usesStateFromOtherControl, addr 0x30f3768, size 0xc, virtual false, abstract: false, final false
  inline bool get_usesStateFromOtherControl();

  /// @brief Method get_valueSizeInBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_valueSizeInBytes();

  /// @brief Method get_valueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_valueType();

  /// @brief Method get_variants, addr 0x30f22a0, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_variants();

  /// @brief Method set_displayName, addr 0x30f2108, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_dontReset, addr 0x30f374c, size 0x1c, virtual false, abstract: false, final false
  inline void set_dontReset(bool value);

  /// @brief Method set_isButton, addr 0x30f3724, size 0x1c, virtual false, abstract: false, final false
  inline void set_isButton(bool value);

  /// @brief Method set_isConfigUpToDate, addr 0x30f2bb8, size 0x1c, virtual false, abstract: false, final false
  inline void set_isConfigUpToDate(bool value);

  /// @brief Method set_isSetupFinished, addr 0x30f36fc, size 0x1c, virtual false, abstract: false, final false
  inline void set_isSetupFinished(bool value);

  /// @brief Method set_noisy, addr 0x30f2428, size 0xd8, virtual false, abstract: false, final false
  inline void set_noisy(bool value);

  /// @brief Method set_shortDisplayName, addr 0x30f2154, size 0x8, virtual false, abstract: false, final false
  inline void set_shortDisplayName(::StringW value);

  /// @brief Method set_synthetic, addr 0x30f250c, size 0x1c, virtual false, abstract: false, final false
  inline void set_synthetic(bool value);

  /// @brief Method set_usesStateFromOtherControl, addr 0x30f3774, size 0x1c, virtual false, abstract: false, final false
  inline void set_usesStateFromOtherControl(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputControl(InputControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputControl(InputControl const&) = delete;

  /// @brief Field m_StateBlock, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::InputSystem::LowLevel::InputStateBlock ___m_StateBlock;

  /// @brief Field m_Name, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Name;

  /// @brief Field m_Path, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_Path;

  /// @brief Field m_DisplayName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_DisplayName;

  /// @brief Field m_DisplayNameFromLayout, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_DisplayNameFromLayout;

  /// @brief Field m_ShortDisplayName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___m_ShortDisplayName;

  /// @brief Field m_ShortDisplayNameFromLayout, offset: 0x50, size: 0x8, def value: None
  ::StringW ___m_ShortDisplayNameFromLayout;

  /// @brief Field m_Layout, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Layout;

  /// @brief Field m_Variants, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::InternedString ___m_Variants;

  /// @brief Field m_Device, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputDevice* ___m_Device;

  /// @brief Field m_Parent, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputControl* ___m_Parent;

  /// @brief Field m_UsageCount, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_UsageCount;

  /// @brief Field m_UsageStartIndex, offset: 0x8c, size: 0x4, def value: None
  int32_t ___m_UsageStartIndex;

  /// @brief Field m_AliasCount, offset: 0x90, size: 0x4, def value: None
  int32_t ___m_AliasCount;

  /// @brief Field m_AliasStartIndex, offset: 0x94, size: 0x4, def value: None
  int32_t ___m_AliasStartIndex;

  /// @brief Field m_ChildCount, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_ChildCount;

  /// @brief Field m_ChildStartIndex, offset: 0x9c, size: 0x4, def value: None
  int32_t ___m_ChildStartIndex;

  /// @brief Field m_ControlFlags, offset: 0xa0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::__InputControl__ControlFlags ___m_ControlFlags;

  /// @brief Field m_CachedValueIsStale, offset: 0xa4, size: 0x1, def value: None
  bool ___m_CachedValueIsStale;

  /// @brief Field m_UnprocessedCachedValueIsStale, offset: 0xa5, size: 0x1, def value: None
  bool ___m_UnprocessedCachedValueIsStale;

  /// @brief Field m_DefaultState, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue ___m_DefaultState;

  /// @brief Field m_MinValue, offset: 0xb8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue ___m_MinValue;

  /// @brief Field m_MaxValue, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue ___m_MaxValue;

  /// @brief Field m_OptimizedControlDataType, offset: 0xd8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Utilities::FourCC ___m_OptimizedControlDataType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::InputControl, 0xe0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_StateBlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_Name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_Path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_DisplayName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_DisplayNameFromLayout) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_ShortDisplayName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_ShortDisplayNameFromLayout) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_Layout) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_Variants) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_Device) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_Parent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_UsageCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_UsageStartIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_AliasCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_AliasStartIndex) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_ChildCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_ChildStartIndex) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_ControlFlags) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_CachedValueIsStale) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_UnprocessedCachedValueIsStale) == 0xa5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_DefaultState) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_MinValue) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_MaxValue) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputControl, ___m_OptimizedControlDataType) == 0xd8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::__InputControl__ControlFlags, "UnityEngine.InputSystem", "InputControl/ControlFlags");
NEED_NO_BOX(::UnityEngine::InputSystem::InputControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputControl*, "UnityEngine.InputSystem", "InputControl");
