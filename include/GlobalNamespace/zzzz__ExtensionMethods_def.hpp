#pragma once
// IWYU pragma private; include "GlobalNamespace/ExtensionMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionMethods)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
class ParticleSystem;
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
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExtensionMethods
class CORDL_TYPE ExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method ContainsLayer, addr 0x22b0264, size 0x30, virtual false, abstract: false, final false
  static inline bool ContainsLayer(::UnityEngine::LayerMask layerMask, int32_t layer);

  /// @brief Method CreateTexture2D, addr 0x22b0700, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> CreateTexture2D(::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::TextureFormat textureFormat);

  /// @brief Method GetPath, addr 0x22b0478, size 0x100, virtual false, abstract: false, final false
  static inline ::StringW GetPath(::UnityEngine::Transform* current);

  /// @brief Method GetRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* GetRange(::System::Collections::Generic::IReadOnlyList_1<T>* list, int32_t index, int32_t count);

  /// @brief Method IsDescendantOf, addr 0x22b0354, size 0xcc, virtual false, abstract: false, final false
  static inline bool IsDescendantOf(::UnityEngine::Transform* transform, ::UnityEngine::Transform* parent);

  /// @brief Method LastUnsafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T LastUnsafe(::System::Collections::Generic::IReadOnlyList_1<T>* list);

  /// @brief Method Reflect, addr 0x22b0578, size 0x188, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion Reflect(::UnityEngine::Quaternion source, ::UnityEngine::Vector3 normal);

  /// @brief Method Rotate, addr 0x22b0828, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Rotate(::UnityEngine::Vector2 vector, float_t rads);

  /// @brief Method SetLocalPositionAndRotation, addr 0x22b0420, size 0x58, virtual false, abstract: false, final false
  static inline void SetLocalPositionAndRotation(::UnityEngine::Transform* tr, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method SetSeed, addr 0x22b0870, size 0x74, virtual false, abstract: false, final false
  static inline void SetSeed(::UnityEngine::ParticleSystem* particleSystem, uint32_t seed);

  /// @brief Method StartUniqueCoroutine, addr 0x22b0294, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Coroutine* StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func);

  /// @brief Method StartUniqueCoroutine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::Coroutine* StartUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func, T value);

  /// @brief Method StopUniqueCoroutine, addr 0x22b0310, size 0x44, virtual false, abstract: false, final false
  static inline void StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_1<::System::Collections::IEnumerator*>* func);

  /// @brief Method StopUniqueCoroutine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void StopUniqueCoroutine(::UnityEngine::MonoBehaviour* m, ::System::Func_2<T, ::System::Collections::IEnumerator*>* func);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionMethods(ExtensionMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionMethods(ExtensionMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ExtensionMethods, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExtensionMethods*, "", "ExtensionMethods");
