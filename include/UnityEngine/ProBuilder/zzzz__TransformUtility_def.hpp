#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
MARK_REF_PTR_T(::UnityEngine::ProBuilder::TransformUtility);
// Type: UnityEngine.ProBuilder::TransformUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::TransformUtility*
class CORDL_TYPE TransformUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_ChildStack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ChildStack, put = setStaticF_s_ChildStack))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>>* s_ChildStack;

  /// @brief Method InverseTransformVertex, addr 0x32b4aec, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* InverseTransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex);

  /// @brief Method ReparentChildren, addr 0x32b47e0, size 0x128, virtual false, abstract: false, final false
  static inline void ReparentChildren(::UnityEngine::Transform* t);

  /// @brief Method TransformVertex, addr 0x32b4908, size 0x1e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::ProBuilder::Vertex* TransformVertex(::UnityEngine::Transform* transform, ::UnityEngine::ProBuilder::Vertex* vertex);

  /// @brief Method UnparentChildren, addr 0x32b4690, size 0x150, virtual false, abstract: false, final false
  static inline void UnparentChildren(::UnityEngine::Transform* t);

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>>*
  getStaticF_s_ChildStack();

  static inline void setStaticF_s_ChildStack(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Transform>, ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>>* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::TransformUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::TransformUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::TransformUtility*, "UnityEngine.ProBuilder", "TransformUtility");
