#pragma once
// IWYU pragma private; include "UnityEngine/JsonUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonUtility)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class JsonUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::JsonUtility);
// Type: UnityEngine::JsonUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::JsonUtility*
class CORDL_TYPE JsonUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method FromJson, addr 0x4871c84, size 0x1ec, virtual false, abstract: false, final false
  static inline ::System::Object* FromJson(::StringW json, ::System::Type* type);

  /// @brief Method FromJson, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T FromJson(::StringW json);

  /// @brief Method FromJsonInternal, addr 0x4871ab8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* FromJsonInternal(::StringW json, ::System::Object* objectToOverwrite, ::System::Type* type);

  /// @brief Method FromJsonOverwrite, addr 0x4871e70, size 0x1bc, virtual false, abstract: false, final false
  static inline void FromJsonOverwrite(::StringW json, ::System::Object* objectToOverwrite);

  /// @brief Method ToJson, addr 0x4871b0c, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::System::Object* obj);

  /// @brief Method ToJson, addr 0x4871b14, size 0x170, virtual false, abstract: false, final false
  static inline ::StringW ToJson(::System::Object* obj, bool prettyPrint);

  /// @brief Method ToJsonInternal, addr 0x4871a74, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW ToJsonInternal(::System::Object* obj, bool prettyPrint);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonUtility(JsonUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonUtility(JsonUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18899 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::JsonUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::JsonUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::JsonUtility*, "UnityEngine", "JsonUtility");
