#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ObjectIdRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectIdRequest)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ObjectIdRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ObjectIdRequest);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ObjectIdRequest
class CORDL_TYPE ObjectIdRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field <destination>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__destination_k__BackingField, put = __cordl_internal_set__destination_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture>
      _destination_k__BackingField;

  __declspec(property(get = get_destination)) ::UnityW<::UnityEngine::RenderTexture> destination;

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__destination_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__destination_k__BackingField();

  constexpr void __cordl_internal_set__destination_k__BackingField(::UnityW<::UnityEngine::RenderTexture> value);

  /// @brief Method get_destination, addr 0x48c5df0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_destination();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectIdRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectIdRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectIdRequest(ObjectIdRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectIdRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectIdRequest(ObjectIdRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11225 };

  /// @brief Field <destination>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____destination_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ObjectIdRequest, ____destination_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ObjectIdRequest, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ObjectIdRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ObjectIdRequest*, "UnityEngine.Rendering", "ObjectIdRequest");
