#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettings_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettings_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class Lazy_1;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugDisplaySettings_1___c;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettings;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class DebugDisplaySettings_1;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugDisplaySettings_1___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettings_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettings_1___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettings`1/IDebugDisplaySettingsDataComparer<T>
class CORDL_TYPE DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*() noexcept;

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::IDebugDisplaySettingsData* x, ::UnityEngine::Rendering::IDebugDisplaySettingsData* y);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::UnityEngine::Rendering::IDebugDisplaySettingsData* obj);

  static inline ::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*
  i___System__Collections__Generic__IEqualityComparer_1___UnityEngine__Rendering__IDebugDisplaySettingsData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer(DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer(DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettings`1/<>c<T>
class CORDL_TYPE DebugDisplaySettings_1___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>* __9;

  static inline ::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>* New_ctor();

  /// @brief Method <.cctor>b__17_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T __cctor_b__17_0();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettings_1___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings_1___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettings_1___c(DebugDisplaySettings_1___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings_1___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettings_1___c(DebugDisplaySettings_1___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11921 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettings`1<T>
class CORDL_TYPE DebugDisplaySettings_1 : public ::System::Object {
public:
  // Declarations
  using IDebugDisplaySettingsDataComparer = ::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer<T>;

  using __c = ::UnityEngine::Rendering::DebugDisplaySettings_1___c<T>;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  /// @brief Field m_Settings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings,
                      put = __cordl_internal_set_m_Settings)) ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* m_Settings;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance)) ::System::Lazy_1<T>* s_Instance;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettings"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettings*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TData> inline TData Add(TData newData);

  /// @brief Method ForEach, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void ForEach(::System::Action_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* onExecute);

  static inline ::UnityEngine::Rendering::DebugDisplaySettings_1<T>* New_ctor();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method TryGetScreenClearColor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color);

  /// @brief Method UnityEngine.Rendering.IDebugDisplaySettings.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsData* UnityEngine_Rendering_IDebugDisplaySettings_Add(::UnityEngine::Rendering::IDebugDisplaySettingsData* newData);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* const& __cordl_internal_get_m_Settings() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>*& __cordl_internal_get_m_Settings();

  constexpr void __cordl_internal_set_m_Settings(::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Lazy_1<T>* getStaticF_s_Instance();

  /// @brief Method get_AreAnySettingsActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_Instance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T get_Instance();

  /// @brief Method get_IsLightingActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_IsPostProcessingAllowed();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettings"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettings* i___UnityEngine__Rendering__IDebugDisplaySettings() noexcept;

  static inline void setStaticF_s_Instance(::System::Lazy_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettings_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettings_1(DebugDisplaySettings_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettings_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettings_1(DebugDisplaySettings_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11922 };

  /// @brief Field m_Settings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::IDebugDisplaySettingsData*>* ___m_Settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplaySettings_1, "UnityEngine.Rendering", "DebugDisplaySettings`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplaySettings_1_IDebugDisplaySettingsDataComparer, "UnityEngine.Rendering",
                                     "DebugDisplaySettings`1/IDebugDisplaySettingsDataComparer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplaySettings_1___c, "UnityEngine.Rendering", "DebugDisplaySettings`1/<>c");
