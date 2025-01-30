#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ISerializableJsonDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISerializableJsonDictionary)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ISerializableJsonDictionary;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ISerializableJsonDictionary);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ISerializableJsonDictionary
class CORDL_TYPE ISerializableJsonDictionary {
public:
  // Declarations
  /// @brief Method ContainsKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ContainsKey(::StringW key);

  /// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline T Get(::StringW key);

  /// @brief Method Overwrite, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Overwrite(::System::Object* obj, ::StringW key);

  /// @brief Method Set, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline void Set(::StringW key, T value);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializableJsonDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializableJsonDictionary(ISerializableJsonDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5979 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ISerializableJsonDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ISerializableJsonDictionary*, "UnityEngine.UIElements", "ISerializableJsonDictionary");
