#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ControlPlayableAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationControlPlayable_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ControlPlayableAsset)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Timeline {
struct ClipCaps;
}
namespace UnityEngine::Timeline {
class ControlPlayableAsset__GetControlableScripts_d__39;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class ControlPlayableAsset;
}
namespace UnityEngine::Timeline {
class ControlPlayableAsset__GetControlableScripts_d__39;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ControlPlayableAsset);
MARK_REF_PTR_T(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ControlPlayableAsset/<GetControlableScripts>d__39
class CORDL_TYPE ControlPlayableAsset__GetControlableScripts_d__39 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current)) ::UnityW<::UnityEngine::MonoBehaviour>
      System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::UnityEngine::MonoBehaviour> __2__current;

  /// @brief Field <>3__root, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___3__root, put = __cordl_internal_set___3__root)) ::UnityW<::UnityEngine::GameObject> __3__root;

  /// @brief Field <>7__wrap1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*>
      __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) int32_t __7__wrap2;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field root, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root)) ::UnityW<::UnityEngine::GameObject> root;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x4825a58, size 0x138, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.MonoBehaviour>.GetEnumerator, addr 0x4825bd8, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>* System_Collections_Generic_IEnumerable_UnityEngine_MonoBehaviour__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current, addr 0x4825b90, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::MonoBehaviour> System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4825c74, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x4825b98, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4825bd0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x4825a54, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get___2__current();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get___3__root() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get___3__root();

  constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> const& __cordl_internal_get___7__wrap1() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*>& __cordl_internal_get___7__wrap1();

  constexpr int32_t const& __cordl_internal_get___7__wrap2() const;

  constexpr int32_t& __cordl_internal_get___7__wrap2();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_root() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_root();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::MonoBehaviour> value);

  constexpr void __cordl_internal_set___3__root(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set___7__wrap1(::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> value);

  constexpr void __cordl_internal_set___7__wrap2(int32_t value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x4824238, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__MonoBehaviour__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__MonoBehaviour__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlPlayableAsset__GetControlableScripts_d__39();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControlPlayableAsset__GetControlableScripts_d__39", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControlPlayableAsset__GetControlableScripts_d__39(ControlPlayableAsset__GetControlableScripts_d__39&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControlPlayableAsset__GetControlableScripts_d__39", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControlPlayableAsset__GetControlableScripts_d__39(ControlPlayableAsset__GetControlableScripts_d__39 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15834 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field root, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___root;

  /// @brief Field <>3__root, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> _____3__root;

  /// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::MonoBehaviour>, ::Array<::UnityW<::UnityEngine::MonoBehaviour>>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
  int32_t _____7__wrap2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, ___root) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, _____3__root) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, _____7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Timeline
// Dependencies UnityEngine.ExposedReference`1<T>, UnityEngine.Playables.PlayableAsset, UnityEngine.Timeline.ActivationControlPlayable::PostPlaybackState, UnityEngine.Timeline.IPropertyPreview,
// UnityEngine.Timeline.ITimelineClipAsset
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ControlPlayableAsset
class CORDL_TYPE ControlPlayableAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
  // Declarations
  using _GetControlableScripts_d__39 = ::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39;

  /// @brief Field <controllingDirectors>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__controllingDirectors_k__BackingField, put = __cordl_internal_set__controllingDirectors_k__BackingField)) bool _controllingDirectors_k__BackingField;

  /// @brief Field <controllingParticles>k__BackingField, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get__controllingParticles_k__BackingField, put = __cordl_internal_set__controllingParticles_k__BackingField)) bool _controllingParticles_k__BackingField;

  /// @brief Field active, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get_active, put = __cordl_internal_set_active)) bool active;

  __declspec(property(get = get_clipCaps)) ::UnityEngine::Timeline::ClipCaps clipCaps;

  __declspec(property(get = get_controllingDirectors, put = set_controllingDirectors)) bool controllingDirectors;

  __declspec(property(get = get_controllingParticles, put = set_controllingParticles)) bool controllingParticles;

  __declspec(property(get = get_duration)) double_t duration;

  /// @brief Field k_EmptyDirectorsList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EmptyDirectorsList,
                      put = setStaticF_k_EmptyDirectorsList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* k_EmptyDirectorsList;

  /// @brief Field k_EmptyParticlesList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EmptyParticlesList,
                      put = setStaticF_k_EmptyParticlesList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* k_EmptyParticlesList;

  /// @brief Field m_ControlDirectorAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ControlDirectorAsset, put = __cordl_internal_set_m_ControlDirectorAsset)) ::UnityW<::UnityEngine::Playables::PlayableAsset> m_ControlDirectorAsset;

  /// @brief Field m_Duration, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Duration, put = __cordl_internal_set_m_Duration)) double_t m_Duration;

  /// @brief Field m_SupportLoop, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportLoop, put = __cordl_internal_set_m_SupportLoop)) bool m_SupportLoop;

  /// @brief Field particleRandomSeed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_particleRandomSeed, put = __cordl_internal_set_particleRandomSeed)) uint32_t particleRandomSeed;

  /// @brief Field postPlayback, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_postPlayback, put = __cordl_internal_set_postPlayback)) ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback;

  /// @brief Field prefabGameObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_prefabGameObject, put = __cordl_internal_set_prefabGameObject)) ::UnityW<::UnityEngine::GameObject> prefabGameObject;

  /// @brief Field s_CreatedPrefabs, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CreatedPrefabs, put = setStaticF_s_CreatedPrefabs)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* s_CreatedPrefabs;

  /// @brief Field s_ProcessedDirectors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ProcessedDirectors,
                      put = setStaticF_s_ProcessedDirectors)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* s_ProcessedDirectors;

  /// @brief Field s_SubEmitterCollector, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SubEmitterCollector,
                      put = setStaticF_s_SubEmitterCollector)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::ParticleSystem>>* s_SubEmitterCollector;

  /// @brief Field searchHierarchy, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_searchHierarchy, put = __cordl_internal_set_searchHierarchy)) bool searchHierarchy;

  /// @brief Field sourceGameObject, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceGameObject, put = __cordl_internal_set_sourceGameObject)) ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::GameObject>>
      sourceGameObject;

  /// @brief Field updateDirector, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_updateDirector, put = __cordl_internal_set_updateDirector)) bool updateDirector;

  /// @brief Field updateITimeControl, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_updateITimeControl, put = __cordl_internal_set_updateITimeControl)) bool updateITimeControl;

  /// @brief Field updateParticle, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_updateParticle, put = __cordl_internal_set_updateParticle)) bool updateParticle;

  /// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept;

  /// @brief Method CacheSubEmitters, addr 0x4824460, size 0x114, virtual false, abstract: false, final false
  static inline void CacheSubEmitters(::UnityEngine::ParticleSystem* ps, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::ParticleSystem>>* subEmitters);

  /// @brief Method ConnectMixerAndPlayable, addr 0x4823f08, size 0xc8, virtual false, abstract: false, final false
  static inline void ConnectMixerAndPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable mixer, ::UnityEngine::Playables::Playable playable, int32_t portIndex);

  /// @brief Method ConnectPlayablesToMixer, addr 0x4823da0, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable ConnectPlayablesToMixer(::UnityEngine::Playables::PlayableGraph graph,
                                                                           ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* playables);

  /// @brief Method CreateActivationPlayable, addr 0x4822ee4, size 0x154, virtual false, abstract: false, final false
  inline void CreateActivationPlayable(::UnityEngine::GameObject* root, ::UnityEngine::Playables::PlayableGraph graph,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables);

  /// @brief Method CreatePlayable, addr 0x4821c58, size 0x808, virtual true, abstract: false, final false
  inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go);

  /// @brief Method GatherProperties, addr 0x4824574, size 0x2e8, virtual true, abstract: false, final true
  inline void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver);

  /// @brief Method GetComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::System::Collections::Generic::IList_1<T>* GetComponent(::UnityEngine::GameObject* gameObject);

  /// @brief Method GetControlableScripts, addr 0x482390c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>* GetControlableScripts(::UnityEngine::GameObject* root);

  /// @brief Method GetControllableParticleSystems, addr 0x4822460, size 0x16c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ParticleSystem>>* GetControllableParticleSystems(::UnityEngine::GameObject* go);

  /// @brief Method GetControllableParticleSystems, addr 0x4824278, size 0x1e8, virtual false, abstract: false, final false
  static inline void GetControllableParticleSystems(::UnityEngine::Transform* t, ::System::Collections::Generic::ICollection_1<::UnityW<::UnityEngine::ParticleSystem>>* roots,
                                                    ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::ParticleSystem>>* subEmitters);

  static inline ::UnityEngine::Timeline::ControlPlayableAsset* New_ctor();

  /// @brief Method OnEnable, addr 0x4821c18, size 0x2c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method PreviewActivation, addr 0x4824cb0, size 0x378, virtual false, abstract: false, final false
  static inline void PreviewActivation(::UnityEngine::Timeline::IPropertyCollector* driver, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::GameObject>>* objects);

  /// @brief Method PreviewDirectors, addr 0x4825440, size 0x3c4, virtual false, abstract: false, final false
  static inline void PreviewDirectors(::UnityEngine::Timeline::IPropertyCollector* driver,
                                      ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* directors);

  /// @brief Method PreviewParticles, addr 0x482485c, size 0x454, virtual false, abstract: false, final false
  static inline void PreviewParticles(::UnityEngine::Timeline::IPropertyCollector* driver, ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ParticleSystem>>* particles);

  /// @brief Method PreviewTimeControl, addr 0x4825028, size 0x418, virtual false, abstract: false, final false
  static inline void PreviewTimeControl(::UnityEngine::Timeline::IPropertyCollector* driver, ::UnityEngine::Playables::PlayableDirector* director,
                                        ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>* scripts);

  /// @brief Method SearchHierarchyAndConnectControlableScripts, addr 0x482397c, size 0x424, virtual false, abstract: false, final false
  static inline void SearchHierarchyAndConnectControlableScripts(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>* controlableScripts,
                                                                 ::UnityEngine::Playables::PlayableGraph graph,
                                                                 ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables);

  /// @brief Method SearchHierarchyAndConnectDirector, addr 0x4823038, size 0x4a4, virtual false, abstract: false, final false
  inline void SearchHierarchyAndConnectDirector(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* directors,
                                                ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables,
                                                bool disableSelfReferences);

  /// @brief Method SearchHierarchyAndConnectParticleSystem, addr 0x48234dc, size 0x430, virtual false, abstract: false, final false
  inline void SearchHierarchyAndConnectParticleSystem(::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::ParticleSystem>>* particleSystems,
                                                      ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables);

  /// @brief Method UpdateDurationAndLoopFlag, addr 0x48225cc, size 0x918, virtual false, abstract: false, final false
  inline void UpdateDurationAndLoopFlag(::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* directors,
                                        ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::ParticleSystem>>* particleSystems);

  constexpr bool const& __cordl_internal_get__controllingDirectors_k__BackingField() const;

  constexpr bool& __cordl_internal_get__controllingDirectors_k__BackingField();

  constexpr bool const& __cordl_internal_get__controllingParticles_k__BackingField() const;

  constexpr bool& __cordl_internal_get__controllingParticles_k__BackingField();

  constexpr bool const& __cordl_internal_get_active() const;

  constexpr bool& __cordl_internal_get_active();

  constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset> const& __cordl_internal_get_m_ControlDirectorAsset() const;

  constexpr ::UnityW<::UnityEngine::Playables::PlayableAsset>& __cordl_internal_get_m_ControlDirectorAsset();

  constexpr double_t const& __cordl_internal_get_m_Duration() const;

  constexpr double_t& __cordl_internal_get_m_Duration();

  constexpr bool const& __cordl_internal_get_m_SupportLoop() const;

  constexpr bool& __cordl_internal_get_m_SupportLoop();

  constexpr uint32_t const& __cordl_internal_get_particleRandomSeed() const;

  constexpr uint32_t& __cordl_internal_get_particleRandomSeed();

  constexpr ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState const& __cordl_internal_get_postPlayback() const;

  constexpr ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState& __cordl_internal_get_postPlayback();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefabGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefabGameObject();

  constexpr bool const& __cordl_internal_get_searchHierarchy() const;

  constexpr bool& __cordl_internal_get_searchHierarchy();

  constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_sourceGameObject() const;

  constexpr ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_sourceGameObject();

  constexpr bool const& __cordl_internal_get_updateDirector() const;

  constexpr bool& __cordl_internal_get_updateDirector();

  constexpr bool const& __cordl_internal_get_updateITimeControl() const;

  constexpr bool& __cordl_internal_get_updateITimeControl();

  constexpr bool const& __cordl_internal_get_updateParticle() const;

  constexpr bool& __cordl_internal_get_updateParticle();

  constexpr void __cordl_internal_set__controllingDirectors_k__BackingField(bool value);

  constexpr void __cordl_internal_set__controllingParticles_k__BackingField(bool value);

  constexpr void __cordl_internal_set_active(bool value);

  constexpr void __cordl_internal_set_m_ControlDirectorAsset(::UnityW<::UnityEngine::Playables::PlayableAsset> value);

  constexpr void __cordl_internal_set_m_Duration(double_t value);

  constexpr void __cordl_internal_set_m_SupportLoop(bool value);

  constexpr void __cordl_internal_set_particleRandomSeed(uint32_t value);

  constexpr void __cordl_internal_set_postPlayback(::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState value);

  constexpr void __cordl_internal_set_prefabGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_searchHierarchy(bool value);

  constexpr void __cordl_internal_set_sourceGameObject(::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::GameObject>> value);

  constexpr void __cordl_internal_set_updateDirector(bool value);

  constexpr void __cordl_internal_set_updateITimeControl(bool value);

  constexpr void __cordl_internal_set_updateParticle(bool value);

  /// @brief Method .ctor, addr 0x4825804, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* getStaticF_k_EmptyDirectorsList();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* getStaticF_k_EmptyParticlesList();

  static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_s_CreatedPrefabs();

  static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* getStaticF_s_ProcessedDirectors();

  static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::ParticleSystem>>* getStaticF_s_SubEmitterCollector();

  /// @brief Method get_clipCaps, addr 0x4821c4c, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Timeline::ClipCaps get_clipCaps();

  /// @brief Method get_controllingDirectors, addr 0x4821bf0, size 0x8, virtual false, abstract: false, final false
  inline bool get_controllingDirectors();

  /// @brief Method get_controllingParticles, addr 0x4821c04, size 0x8, virtual false, abstract: false, final false
  inline bool get_controllingParticles();

  /// @brief Method get_duration, addr 0x4821c44, size 0x8, virtual true, abstract: false, final false
  inline double_t get_duration();

  /// @brief Convert to "::UnityEngine::Timeline::IPropertyPreview"
  constexpr ::UnityEngine::Timeline::IPropertyPreview* i___UnityEngine__Timeline__IPropertyPreview() noexcept;

  /// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
  constexpr ::UnityEngine::Timeline::ITimelineClipAsset* i___UnityEngine__Timeline__ITimelineClipAsset() noexcept;

  static inline void setStaticF_k_EmptyDirectorsList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  static inline void setStaticF_k_EmptyParticlesList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* value);

  static inline void setStaticF_s_CreatedPrefabs(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* value);

  static inline void setStaticF_s_ProcessedDirectors(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value);

  static inline void setStaticF_s_SubEmitterCollector(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::ParticleSystem>>* value);

  /// @brief Method set_controllingDirectors, addr 0x4821bf8, size 0xc, virtual false, abstract: false, final false
  inline void set_controllingDirectors(bool value);

  /// @brief Method set_controllingParticles, addr 0x4821c0c, size 0xc, virtual false, abstract: false, final false
  inline void set_controllingParticles(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ControlPlayableAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ControlPlayableAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ControlPlayableAsset(ControlPlayableAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ControlPlayableAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ControlPlayableAsset(ControlPlayableAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15835 };

  /// @brief Field k_MaxRandInt offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxRandInt{ static_cast<int32_t>(0x2710) };

  /// @brief Field sourceGameObject, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::ExposedReference_1<::UnityW<::UnityEngine::GameObject>> ___sourceGameObject;

  /// @brief Field prefabGameObject, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___prefabGameObject;

  /// @brief Field updateParticle, offset: 0x30, size: 0x1, def value: None
  bool ___updateParticle;

  /// @brief Field particleRandomSeed, offset: 0x34, size: 0x4, def value: None
  uint32_t ___particleRandomSeed;

  /// @brief Field updateDirector, offset: 0x38, size: 0x1, def value: None
  bool ___updateDirector;

  /// @brief Field updateITimeControl, offset: 0x39, size: 0x1, def value: None
  bool ___updateITimeControl;

  /// @brief Field searchHierarchy, offset: 0x3a, size: 0x1, def value: None
  bool ___searchHierarchy;

  /// @brief Field active, offset: 0x3b, size: 0x1, def value: None
  bool ___active;

  /// @brief Field postPlayback, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState ___postPlayback;

  /// @brief Field m_ControlDirectorAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Playables::PlayableAsset> ___m_ControlDirectorAsset;

  /// @brief Field m_Duration, offset: 0x48, size: 0x8, def value: None
  double_t ___m_Duration;

  /// @brief Field m_SupportLoop, offset: 0x50, size: 0x1, def value: None
  bool ___m_SupportLoop;

  /// @brief Field <controllingDirectors>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____controllingDirectors_k__BackingField;

  /// @brief Field <controllingParticles>k__BackingField, offset: 0x52, size: 0x1, def value: None
  bool ____controllingParticles_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___sourceGameObject) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___prefabGameObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___updateParticle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___particleRandomSeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___updateDirector) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___updateITimeControl) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___searchHierarchy) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___active) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___postPlayback) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___m_ControlDirectorAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___m_Duration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ___m_SupportLoop) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ____controllingDirectors_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::ControlPlayableAsset, ____controllingParticles_k__BackingField) == 0x52, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::ControlPlayableAsset, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ControlPlayableAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ControlPlayableAsset*, "UnityEngine.Timeline", "ControlPlayableAsset");
NEED_NO_BOX(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ControlPlayableAsset__GetControlableScripts_d__39*, "UnityEngine.Timeline", "ControlPlayableAsset/<GetControlableScripts>d__39");
