#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/SerializedType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SerializedType)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
struct SerializedType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ResourceManagement::Util::SerializedType);
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.SerializedType
struct CORDL_TYPE SerializedType {
public:
  // Declarations
  __declspec(property(get = get_AssemblyName)) ::StringW AssemblyName;

  __declspec(property(get = get_ClassName)) ::StringW ClassName;

  __declspec(property(get = get_Value, put = set_Value)) ::System::Type* Value;

  __declspec(property(get = get_ValueChanged, put = set_ValueChanged)) bool ValueChanged;

  /// @brief Method ToString, addr 0x479823c, size 0xb0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_AssemblyName, addr 0x479822c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_AssemblyName();

  /// @brief Method get_ClassName, addr 0x4798234, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_ClassName();

  /// @brief Method get_Value, addr 0x47982ec, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Type* get_Value();

  /// @brief Method get_ValueChanged, addr 0x47985a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_ValueChanged();

  /// @brief Method set_Value, addr 0x47984e0, size 0xc0, virtual false, abstract: false, final false
  inline void set_Value(::System::Type* value);

  /// @brief Method set_ValueChanged, addr 0x47985a8, size 0xc, virtual false, abstract: false, final false
  inline void set_ValueChanged(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedType();

  // Ctor Parameters [CppParam { name: "m_AssemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_ClassName", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "m_CachedType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "_ValueChanged_k__BackingField", ty: "bool", modifiers: "", def_value: None }]
  constexpr SerializedType(::StringW m_AssemblyName, ::StringW m_ClassName, ::System::Type* m_CachedType, bool _ValueChanged_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15647 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_AssemblyName, offset: 0x0, size: 0x8, def value: None
  ::StringW m_AssemblyName;

  /// @brief Field m_ClassName, offset: 0x8, size: 0x8, def value: None
  ::StringW m_ClassName;

  /// @brief Field m_CachedType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* m_CachedType;

  /// @brief Field <ValueChanged>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool _ValueChanged_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::SerializedType, m_AssemblyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::SerializedType, m_ClassName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::SerializedType, m_CachedType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::SerializedType, _ValueChanged_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::SerializedType, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::SerializedType, "UnityEngine.ResourceManagement.Util", "SerializedType");
