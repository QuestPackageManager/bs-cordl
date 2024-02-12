#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionMethods)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ExtensionMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ExtensionMethods);
// Type: ::ExtensionMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15597))
// CS Name: ::ExtensionMethods*
class CORDL_TYPE ExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method ContainsLayer, addr 0xe511ec, size 0x38, virtual false, abstract: false, final false
  static inline bool ContainsLayer(::UnityEngine::LayerMask layerMask, int32_t layer);

  /// @brief Method StartUniqueCoroutine, addr 0xe51224, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Coroutine* StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func);

  /// @brief Method StartUniqueCoroutine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::Coroutine* StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func, T value);

  /// @brief Method StopUniqueCoroutine, addr 0xe512a0, size 0x44, virtual false, abstract: false, final false
  static inline void StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func);

  /// @brief Method StopUniqueCoroutine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func);

  /// @brief Method IsDescendantOf, addr 0xe512e4, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsDescendantOf(::UnityEngine::Transform* transform, ::UnityEngine::Transform* parent);

  /// @brief Method SetLocalPositionAndRotation, addr 0xe513b0, size 0x58, virtual false, abstract: false, final false
  static inline void SetLocalPositionAndRotation(::UnityEngine::Transform* tr, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method GetPath, addr 0xe51408, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetPath(::UnityEngine::Transform* current);

  /// @brief Method Reflect, addr 0xe51508, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Reflect(::UnityEngine::Quaternion source, ::UnityEngine::Vector3 normal);

  /// @brief Method CreateTexture2D, addr 0xe5166c, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> CreateTexture2D(::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::TextureFormat textureFormat);

  /// @brief Method Rotate, addr 0xe517b4, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Rotate(::UnityEngine::Vector2 vector, float_t rads);

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionMethods(ExtensionMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionMethods(ExtensionMethods const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionMethods();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExtensionMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExtensionMethods*, "", "ExtensionMethods");
