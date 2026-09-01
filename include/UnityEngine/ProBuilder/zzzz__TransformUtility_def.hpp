#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\TransformUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(TransformUtility)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class TransformUtility;
}
// Write type traits
MARK_REF_T(::UnityEngine::ProBuilder::TransformUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::TransformUtility*, "UnityEngine.ProBuilder", "TransformUtility");
// Dependencies System.Object
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: UnityEngine.ProBuilder.TransformUtility
class CORDL_TYPE TransformUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_ChildStack, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ChildStack,
                      put = setStaticF_s_ChildStack)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>* s_ChildStack;

  /// @brief Method InverseTransformVertex, addr 0x66f8694, size 0x1b4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* InverseTransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex);

  /// @brief Method ReparentChildren, addr 0x66f8398, size 0x140, virtual false, abstract: false, final false
  static inline void ReparentChildren(::UnityEngine::Transform* t);

  /// @brief Method TransformVertex, addr 0x66f84d8, size 0x1bc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* TransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex);

  /// @brief Method UnparentChildren, addr 0x66f8218, size 0x180, virtual false, abstract: false, final false
  static inline void UnparentChildren(::UnityEngine::Transform* t);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>* getStaticF_s_ChildStack();

  static inline void setStaticF_s_ChildStack(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransformUtility(TransformUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransformUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransformUtility(TransformUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ProBuilder::TransformUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
