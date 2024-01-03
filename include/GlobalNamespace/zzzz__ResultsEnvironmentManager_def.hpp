#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResultsEnvironmentManager)
namespace GlobalNamespace {
class __ResultsEnvironmentManager____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class BaseResultsEnvironmentController;
}
namespace GlobalNamespace {
class __ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsEnvironmentManager;
}
namespace GlobalNamespace {
class __ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword;
}
namespace GlobalNamespace {
class __ResultsEnvironmentManager____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultsEnvironmentManager);
MARK_REF_PTR_T(::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword);
MARK_REF_PTR_T(::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0);
// Type: ::ResultEnvironmentControllerWithKeyword
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4695))
// CS Name: ::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*
class CORDL_TYPE __ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword : public ::System::Object {
public:
  // Declarations
  /// @brief Field _keyword, offset 0x10, size 0x8
  __declspec(property(get = __get__keyword, put = __set__keyword))::StringW _keyword;

  /// @brief Field _resultsEnvironmentController, offset 0x18, size 0x8
  __declspec(property(get = __get__resultsEnvironmentController, put = __set__resultsEnvironmentController))::GlobalNamespace::BaseResultsEnvironmentController* _resultsEnvironmentController;

  __declspec(property(get = get_keyword))::StringW keyword;

  __declspec(property(get = get_resultsEnvironmentController))::GlobalNamespace::BaseResultsEnvironmentController* resultsEnvironmentController;

  constexpr ::StringW& __get__keyword();

  constexpr ::StringW const& __get__keyword() const;

  constexpr void __set__keyword(::StringW value);

  constexpr ::GlobalNamespace::BaseResultsEnvironmentController*& __get__resultsEnvironmentController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BaseResultsEnvironmentController*> const& __get__resultsEnvironmentController() const;

  constexpr void __set__resultsEnvironmentController(::GlobalNamespace::BaseResultsEnvironmentController* value);

  /// @brief Method get_keyword, addr 0x2376a00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_keyword();

  /// @brief Method get_resultsEnvironmentController, addr 0x2376a08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BaseResultsEnvironmentController* get_resultsEnvironmentController();

  static inline ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword* New_ctor();

  /// @brief Method .ctor, addr 0x2376a10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword(__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword(__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword();

public:
  /// @brief Field _keyword, offset: 0x10, size: 0x8, def value: None
  ::StringW ____keyword;

  /// @brief Field _resultsEnvironmentController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BaseResultsEnvironmentController* ____resultsEnvironmentController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword, ____keyword) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword, ____resultsEnvironmentController) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4696))
// CS Name: ::ResultsEnvironmentManager::<>c__DisplayClass3_0*
class CORDL_TYPE __ResultsEnvironmentManager____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field keyword, offset 0x10, size 0x8
  __declspec(property(get = __get_keyword, put = __set_keyword))::StringW keyword;

  constexpr ::StringW& __get_keyword();

  constexpr ::StringW const& __get_keyword() const;

  constexpr void __set_keyword(::StringW value);

  static inline ::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor, addr 0x23768b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetResultEnvironmentControllerForKeyword>b__0, addr 0x2376a18, size 0x24, virtual false, abstract: false, final false
  inline bool _GetResultEnvironmentControllerForKeyword_b__0(::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword* controllerWithKeyword);

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentManager____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResultsEnvironmentManager____c__DisplayClass3_0(__ResultsEnvironmentManager____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResultsEnvironmentManager____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResultsEnvironmentManager____c__DisplayClass3_0(__ResultsEnvironmentManager____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResultsEnvironmentManager____c__DisplayClass3_0();

public:
  /// @brief Field keyword, offset: 0x10, size: 0x8, def value: None
  ::StringW ___keyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0, ___keyword) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ResultsEnvironmentManager
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4697))
// CS Name: ::ResultsEnvironmentManager*
class CORDL_TYPE ResultsEnvironmentManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0;

  using ResultEnvironmentControllerWithKeyword = ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword;

  /// @brief Field _resultEnvironmentControllersWithKeyword, offset 0x18, size 0x8
  __declspec(property(get = __get__resultEnvironmentControllersWithKeyword, put = __set__resultEnvironmentControllersWithKeyword))::ArrayW<
      ::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*,
      ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*> _resultEnvironmentControllersWithKeyword;

  /// @brief Field _currentShownKeyword, offset 0x20, size 0x8
  __declspec(property(get = __get__currentShownKeyword, put = __set__currentShownKeyword))::StringW _currentShownKeyword;

  constexpr ::ArrayW<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*,
                     ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*>&
  __get__resultEnvironmentControllersWithKeyword();

  constexpr ::ArrayW<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*,
                     ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*> const&
  __get__resultEnvironmentControllersWithKeyword() const;

  constexpr void __set__resultEnvironmentControllersWithKeyword(::ArrayW<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*,
                                                                         ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*>
                                                                    value);

  constexpr ::StringW& __get__currentShownKeyword();

  constexpr ::StringW const& __get__currentShownKeyword() const;

  constexpr void __set__currentShownKeyword(::StringW value);

  /// @brief Method GetResultEnvironmentControllerForKeyword, addr 0x23767d4, size 0xe4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BaseResultsEnvironmentController* GetResultEnvironmentControllerForKeyword(::StringW keyword);

  /// @brief Method ShowResultForKeyword, addr 0x23768c0, size 0xa4, virtual false, abstract: false, final false
  /// @param immediately: bool (default: false)
  inline void ShowResultForKeyword(::StringW keyword, bool immediately = false);

  /// @brief Method HideResultForKeyword, addr 0x2376964, size 0x94, virtual false, abstract: false, final false
  /// @param immediately: bool (default: false)
  inline void HideResultForKeyword(::StringW keyword, bool immediately = false);

  static inline ::GlobalNamespace::ResultsEnvironmentManager* New_ctor();

  /// @brief Method .ctor, addr 0x23769f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsEnvironmentManager(ResultsEnvironmentManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsEnvironmentManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsEnvironmentManager(ResultsEnvironmentManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsEnvironmentManager();

public:
  /// @brief Field _resultEnvironmentControllersWithKeyword, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*, ::Array<::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*>*>
      ____resultEnvironmentControllersWithKeyword;

  /// @brief Field _currentShownKeyword, offset: 0x20, size: 0x8, def value: None
  ::StringW ____currentShownKeyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsEnvironmentManager, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsEnvironmentManager, ____resultEnvironmentControllersWithKeyword) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsEnvironmentManager, ____currentShownKeyword) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsEnvironmentManager*, "", "ResultsEnvironmentManager");
NEED_NO_BOX(::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ResultsEnvironmentManager__ResultEnvironmentControllerWithKeyword*, "", "ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword");
NEED_NO_BOX(::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ResultsEnvironmentManager____c__DisplayClass3_0*, "", "ResultsEnvironmentManager/<>c__DisplayClass3_0");
