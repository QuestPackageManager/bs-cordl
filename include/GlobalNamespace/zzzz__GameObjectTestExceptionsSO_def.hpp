#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameObjectTestExceptionsSO)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class __GameObjectTestExceptionsSO__GameObjectTestException;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectTestExceptionsSO;
}
namespace GlobalNamespace {
class __GameObjectTestExceptionsSO__GameObjectTestException;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameObjectTestExceptionsSO);
MARK_REF_PTR_T(::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException);
// Type: ::GameObjectTestException
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4192))
// CS Name: ::GameObjectTestExceptionsSO::GameObjectTestException*
class CORDL_TYPE __GameObjectTestExceptionsSO__GameObjectTestException : public ::System::Object {
public:
  // Declarations
  /// @brief Field _environmentInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__environmentInfo, put = __set__environmentInfo))::GlobalNamespace::EnvironmentInfoSO* _environmentInfo;

  /// @brief Field _exceptionNotes, offset 0x18, size 0x8
  __declspec(property(get = __get__exceptionNotes, put = __set__exceptionNotes))::StringW _exceptionNotes;

  /// @brief Field _sceneHierarchies, offset 0x20, size 0x8
  __declspec(property(get = __get__sceneHierarchies, put = __set__sceneHierarchies))::ArrayW<::StringW, ::Array<::StringW>*> _sceneHierarchies;

  __declspec(property(get = get_environmentInfo))::GlobalNamespace::EnvironmentInfoSO* environmentInfo;

  __declspec(property(get = get_sceneHierarchies))::ArrayW<::StringW, ::Array<::StringW>*> sceneHierarchies;

  constexpr ::GlobalNamespace::EnvironmentInfoSO*& __get__environmentInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> const& __get__environmentInfo() const;

  constexpr void __set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  constexpr ::StringW& __get__exceptionNotes();

  constexpr ::StringW const& __get__exceptionNotes() const;

  constexpr void __set__exceptionNotes(::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__sceneHierarchies();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__sceneHierarchies() const;

  constexpr void __set__sceneHierarchies(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method get_environmentInfo addr 0x23238ac size 0x8 virtual false final false
  inline ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();

  /// @brief Method get_sceneHierarchies addr 0x23238b4 size 0x8 virtual false final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_sceneHierarchies();

  static inline ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException* New_ctor();

  /// @brief Method .ctor addr 0x23238bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectTestExceptionsSO__GameObjectTestException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GameObjectTestExceptionsSO__GameObjectTestException(__GameObjectTestExceptionsSO__GameObjectTestException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GameObjectTestExceptionsSO__GameObjectTestException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GameObjectTestExceptionsSO__GameObjectTestException(__GameObjectTestExceptionsSO__GameObjectTestException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameObjectTestExceptionsSO__GameObjectTestException();

public:
  /// @brief Field _environmentInfo, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentInfoSO* ____environmentInfo;

  /// @brief Field _exceptionNotes, offset: 0x18, size: 0x8, def value: None
  ::StringW ____exceptionNotes;

  /// @brief Field _sceneHierarchies, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____sceneHierarchies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::GameObjectTestExceptionsSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15857))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4193))
// CS Name: ::GameObjectTestExceptionsSO*
class CORDL_TYPE GameObjectTestExceptionsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using GameObjectTestException = ::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException;

  /// @brief Field tubeBloomPrePassLightIgnores, offset 0x18, size 0x8
  __declspec(property(get = __get_tubeBloomPrePassLightIgnores,
                      put = __set_tubeBloomPrePassLightIgnores))::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*,
                                                                         ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> tubeBloomPrePassLightIgnores;

  constexpr ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>&
  __get_tubeBloomPrePassLightIgnores();

  constexpr ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> const&
  __get_tubeBloomPrePassLightIgnores() const;

  constexpr void __set_tubeBloomPrePassLightIgnores(
      ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> value);

  /// @brief Method GetExceptionAsDictionary addr 0x23237c4 size 0xe0 virtual false final false
  static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentInfoSO*, ::ArrayW<::StringW, ::Array<::StringW>*>>* GetExceptionAsDictionary(
      ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*> testExceptionArray);

  static inline ::GlobalNamespace::GameObjectTestExceptionsSO* New_ctor();

  /// @brief Method .ctor addr 0x23238a4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectTestExceptionsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameObjectTestExceptionsSO(GameObjectTestExceptionsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameObjectTestExceptionsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameObjectTestExceptionsSO(GameObjectTestExceptionsSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameObjectTestExceptionsSO();

public:
  /// @brief Field tubeBloomPrePassLightIgnores, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, ::Array<::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*>*>
      ___tubeBloomPrePassLightIgnores;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameObjectTestExceptionsSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameObjectTestExceptionsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameObjectTestExceptionsSO*, "", "GameObjectTestExceptionsSO");
NEED_NO_BOX(::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameObjectTestExceptionsSO__GameObjectTestException*, "", "GameObjectTestExceptionsSO/GameObjectTestException");
