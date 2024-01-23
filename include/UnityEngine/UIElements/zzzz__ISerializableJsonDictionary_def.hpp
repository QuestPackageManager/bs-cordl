#pragma once
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
// Type: UnityEngine.UIElements::ISerializableJsonDictionary
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6916))
// CS Name: ::UnityEngine.UIElements::ISerializableJsonDictionary*
class CORDL_TYPE ISerializableJsonDictionary {
public:
  // Declarations
  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void Set(::StringW key, T value);

  /// @brief Method Overwrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Overwrite(::System::Object* obj, ::StringW key);

  /// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ContainsKey(::StringW key);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializableJsonDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISerializableJsonDictionary(ISerializableJsonDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISerializableJsonDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializableJsonDictionary(ISerializableJsonDictionary const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ISerializableJsonDictionary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ISerializableJsonDictionary*, "UnityEngine.UIElements", "ISerializableJsonDictionary");
