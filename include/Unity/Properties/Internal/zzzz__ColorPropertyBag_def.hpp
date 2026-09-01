#pragma once
// IWYU pragma private; include "Unity\Properties\Internal\ColorPropertyBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorPropertyBag)
namespace Unity::Properties::Internal {
class ColorPropertyBag_AProperty;
}
namespace Unity::Properties::Internal {
class ColorPropertyBag_BProperty;
}
namespace Unity::Properties::Internal {
class ColorPropertyBag_GProperty;
}
namespace Unity::Properties::Internal {
class ColorPropertyBag_RProperty;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class ColorPropertyBag;
}
namespace Unity::Properties::Internal {
class ColorPropertyBag_AProperty;
}
namespace Unity::Properties::Internal {
class ColorPropertyBag_BProperty;
}
namespace Unity::Properties::Internal {
class ColorPropertyBag_GProperty;
}
namespace Unity::Properties::Internal {
class ColorPropertyBag_RProperty;
}
// Write type traits
MARK_REF_T(::Unity::Properties::Internal::ColorPropertyBag*);
MARK_REF_T(::Unity::Properties::Internal::ColorPropertyBag_AProperty*);
MARK_REF_T(::Unity::Properties::Internal::ColorPropertyBag_BProperty*);
MARK_REF_T(::Unity::Properties::Internal::ColorPropertyBag_GProperty*);
MARK_REF_T(::Unity::Properties::Internal::ColorPropertyBag_RProperty*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::ColorPropertyBag*, "Unity.Properties.Internal", "ColorPropertyBag");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::ColorPropertyBag_AProperty*, "Unity.Properties.Internal", "ColorPropertyBag/AProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::ColorPropertyBag_BProperty*, "Unity.Properties.Internal", "ColorPropertyBag/BProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::ColorPropertyBag_GProperty*, "Unity.Properties.Internal", "ColorPropertyBag/GProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::ColorPropertyBag_RProperty*, "Unity.Properties.Internal", "ColorPropertyBag/RProperty");
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Color
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ColorPropertyBag/RProperty
class CORDL_TYPE ColorPropertyBag_RProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb34dc, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Color> container);

  static inline ::Unity::Properties::Internal::ColorPropertyBag_RProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb34e4, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Color> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb33a0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb34d4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb3490, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPropertyBag_RProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_RProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPropertyBag_RProperty(ColorPropertyBag_RProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_RProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPropertyBag_RProperty(ColorPropertyBag_RProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::ColorPropertyBag_RProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Color
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ColorPropertyBag/GProperty
class CORDL_TYPE ColorPropertyBag_GProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb3538, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Color> container);

  static inline ::Unity::Properties::Internal::ColorPropertyBag_GProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb3540, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Color> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb33dc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb3530, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb34ec, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPropertyBag_GProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_GProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPropertyBag_GProperty(ColorPropertyBag_GProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_GProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPropertyBag_GProperty(ColorPropertyBag_GProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::ColorPropertyBag_GProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Color
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ColorPropertyBag/BProperty
class CORDL_TYPE ColorPropertyBag_BProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb3594, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Color> container);

  static inline ::Unity::Properties::Internal::ColorPropertyBag_BProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb359c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Color> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb3418, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb358c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb3548, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPropertyBag_BProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_BProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPropertyBag_BProperty(ColorPropertyBag_BProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_BProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPropertyBag_BProperty(ColorPropertyBag_BProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::ColorPropertyBag_BProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.Color
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ColorPropertyBag/AProperty
class CORDL_TYPE ColorPropertyBag_AProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb35f0, size 0x8, virtual true, abstract: false, final false
  inline float_t GetValue(::by_ref<::UnityEngine::Color> container);

  static inline ::Unity::Properties::Internal::ColorPropertyBag_AProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb35f8, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::Color> container, float_t value);

  /// @brief Method .ctor, addr 0x6bb3454, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb35e8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb35a4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPropertyBag_AProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_AProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPropertyBag_AProperty(ColorPropertyBag_AProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag_AProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPropertyBag_AProperty(ColorPropertyBag_AProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19716 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::ColorPropertyBag_AProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.Color
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.ColorPropertyBag
class CORDL_TYPE ColorPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Color> {
public:
  // Declarations
  using AProperty = ::Unity::Properties::Internal::ColorPropertyBag_AProperty;

  using BProperty = ::Unity::Properties::Internal::ColorPropertyBag_BProperty;

  using GProperty = ::Unity::Properties::Internal::ColorPropertyBag_GProperty;

  using RProperty = ::Unity::Properties::Internal::ColorPropertyBag_RProperty;

  static inline ::Unity::Properties::Internal::ColorPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6bb21a4, size 0x204, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPropertyBag(ColorPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPropertyBag(ColorPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::ColorPropertyBag) == 0x28, "Size mismatch!");

} // namespace Unity::Properties::Internal
