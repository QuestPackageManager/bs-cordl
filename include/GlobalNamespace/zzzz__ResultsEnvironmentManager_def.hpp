#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResultsEnvironmentManager)
namespace GlobalNamespace {
class BaseResultsEnvironmentController;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsEnvironmentManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultsEnvironmentManager);
// Type: ::ResultsEnvironmentManager
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ResultsEnvironmentManager*
class CORDL_TYPE ResultsEnvironmentManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _preloadedResultsEnvironmentControllers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__preloadedResultsEnvironmentControllers, put = __cordl_internal_set__preloadedResultsEnvironmentControllers))::System::Collections::Generic::
      Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* _preloadedResultsEnvironmentControllers;

  /// @brief Method GetResultEnvironmentControllerForKeyword, addr 0x23ebec0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController> GetResultEnvironmentControllerForKeyword(::StringW keyword);

  /// @brief Method HideResultForKeyword, addr 0x23ebfbc, size 0x84, virtual false, abstract: false, final false
  inline void HideResultForKeyword(::StringW keyword);

  /// @brief Method Init, addr 0x23ebab0, size 0x410, virtual false, abstract: false, final false
  inline void Init(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* resultsEnvironmentControllers);

  static inline ::GlobalNamespace::ResultsEnvironmentManager* New_ctor();

  /// @brief Method ShowResultForKeyword, addr 0x23ebf38, size 0x84, virtual false, abstract: false, final false
  inline void ShowResultForKeyword(::StringW keyword);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*& __cordl_internal_get__preloadedResultsEnvironmentControllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>*> const&
  __cordl_internal_get__preloadedResultsEnvironmentControllers() const;

  constexpr void
  __cordl_internal_set__preloadedResultsEnvironmentControllers(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* value);

  /// @brief Method .ctor, addr 0x23ec040, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsEnvironmentManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsEnvironmentManager(ResultsEnvironmentManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsEnvironmentManager(ResultsEnvironmentManager const&) = delete;

  /// @brief Field _preloadedResultsEnvironmentControllers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BaseResultsEnvironmentController>>* ____preloadedResultsEnvironmentControllers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsEnvironmentManager, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsEnvironmentManager, ____preloadedResultsEnvironmentControllers) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsEnvironmentManager*, "", "ResultsEnvironmentManager");
