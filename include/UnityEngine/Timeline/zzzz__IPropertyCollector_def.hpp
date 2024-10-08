#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IPropertyCollector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPropertyCollector)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::IPropertyCollector);
// Type: UnityEngine.Timeline::IPropertyCollector
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::IPropertyCollector*
class CORDL_TYPE IPropertyCollector {
public:
  // Declarations
  /// @brief Method AddFromClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromClip(::UnityEngine::AnimationClip* clip);

  /// @brief Method AddFromClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromClip(::UnityEngine::GameObject* obj, ::UnityEngine::AnimationClip* clip);

  /// @brief Method AddFromClips, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromClips(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>* clips);

  /// @brief Method AddFromClips, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromClips(::UnityEngine::GameObject* obj, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AnimationClip>>* clips);

  /// @brief Method AddFromComponent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromComponent(::UnityEngine::GameObject* obj, ::UnityEngine::Component* component);

  /// @brief Method AddFromName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromName(::UnityEngine::Component* component, ::StringW name);

  /// @brief Method AddFromName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromName(::StringW name);

  /// @brief Method AddFromName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void AddFromName(::StringW name);

  /// @brief Method AddFromName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddFromName(::UnityEngine::GameObject* obj, ::StringW name);

  /// @brief Method AddFromName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline void AddFromName(::UnityEngine::GameObject* obj, ::StringW name);

  /// @brief Method AddObjectProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddObjectProperties(::UnityEngine::Object* obj, ::UnityEngine::AnimationClip* clip);

  /// @brief Method PopActiveGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PopActiveGameObject();

  /// @brief Method PushActiveGameObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PushActiveGameObject(::UnityEngine::GameObject* gameObject);

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyCollector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPropertyCollector(IPropertyCollector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyCollector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyCollector(IPropertyCollector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::IPropertyCollector);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IPropertyCollector*, "UnityEngine.Timeline", "IPropertyCollector");
