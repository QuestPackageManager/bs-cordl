#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/RectIntPropertyBag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectIntPropertyBag)
namespace Unity::Properties::Internal {
class RectIntPropertyBag_HeightProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_WidthProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_YProperty;
}
namespace UnityEngine {
struct RectInt;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class RectIntPropertyBag;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_HeightProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_WidthProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_XProperty;
}
namespace Unity::Properties::Internal {
class RectIntPropertyBag_YProperty;
}
// Write type traits
MARK_REF_T(::Unity::Properties::Internal::RectIntPropertyBag*);
MARK_REF_T(::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*);
MARK_REF_T(::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*);
MARK_REF_T(::Unity::Properties::Internal::RectIntPropertyBag_XProperty*);
MARK_REF_T(::Unity::Properties::Internal::RectIntPropertyBag_YProperty*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::RectIntPropertyBag*, "Unity.Properties.Internal", "RectIntPropertyBag");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/HeightProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/WidthProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::RectIntPropertyBag_XProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/XProperty");
DEFINE_IL2CPP_CLASS(::Unity::Properties::Internal::RectIntPropertyBag_YProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/YProperty");
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/XProperty
class CORDL_TYPE RectIntPropertyBag_XProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb0c64, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::RectInt> container);

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_XProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb0c6c, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value);

  /// @brief Method .ctor, addr 0x6bb0b28, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0c5c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb0c18, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_XProperty(RectIntPropertyBag_XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_XProperty(RectIntPropertyBag_XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::RectIntPropertyBag_XProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/YProperty
class CORDL_TYPE RectIntPropertyBag_YProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb0cc0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::RectInt> container);

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_YProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb0cc8, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value);

  /// @brief Method .ctor, addr 0x6bb0b64, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0cb8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb0c74, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_YProperty(RectIntPropertyBag_YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_YProperty(RectIntPropertyBag_YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::RectIntPropertyBag_YProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/WidthProperty
class CORDL_TYPE RectIntPropertyBag_WidthProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb0d1c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::RectInt> container);

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb0d24, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value);

  /// @brief Method .ctor, addr 0x6bb0ba0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0d14, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb0cd0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_WidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_WidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_WidthProperty(RectIntPropertyBag_WidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_WidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_WidthProperty(RectIntPropertyBag_WidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag/HeightProperty
class CORDL_TYPE RectIntPropertyBag_HeightProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x6bb0d78, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetValue(::by_ref<::UnityEngine::RectInt> container);

  static inline ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty* New_ctor();

  /// @brief Method SetValue, addr 0x6bb0d80, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::RectInt> container, int32_t value);

  /// @brief Method .ctor, addr 0x6bb0bdc, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsReadOnly, addr 0x6bb0d70, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_Name, addr 0x6bb0d2c, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag_HeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_HeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag_HeightProperty(RectIntPropertyBag_HeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag_HeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag_HeightProperty(RectIntPropertyBag_HeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19712 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty) == 0x18, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.RectInt
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.RectIntPropertyBag
class CORDL_TYPE RectIntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::RectInt> {
public:
  // Declarations
  using HeightProperty = ::Unity::Properties::Internal::RectIntPropertyBag_HeightProperty;

  using WidthProperty = ::Unity::Properties::Internal::RectIntPropertyBag_WidthProperty;

  using XProperty = ::Unity::Properties::Internal::RectIntPropertyBag_XProperty;

  using YProperty = ::Unity::Properties::Internal::RectIntPropertyBag_YProperty;

  static inline ::Unity::Properties::Internal::RectIntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x6baf810, size 0x204, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag(RectIntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag(RectIntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::Internal::RectIntPropertyBag) == 0x28, "Size mismatch!");

} // namespace Unity::Properties::Internal
