#pragma once
// IWYU pragma private; include "TMPro/ObjectUtilsBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectUtilsBridge)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace TMPro {
class ObjectUtilsBridge;
}
// Write type traits
MARK_REF_T(::TMPro::ObjectUtilsBridge*);
DEFINE_IL2CPP_CLASS(::TMPro::ObjectUtilsBridge*, "TMPro", "ObjectUtilsBridge");
// [Extension]
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.ObjectUtilsBridge
class CORDL_TYPE ObjectUtilsBridge : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief Method MarkDirty, addr 0x69f84d8, size 0x14, virtual false, abstract: false, final false
  static inline void MarkDirty(::UnityEngine::Object* obj);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectUtilsBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectUtilsBridge", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectUtilsBridge(ObjectUtilsBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectUtilsBridge", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectUtilsBridge(ObjectUtilsBridge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24507 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::TMPro::ObjectUtilsBridge) == 0x10, "Size mismatch!");

} // namespace TMPro
