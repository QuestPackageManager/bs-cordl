#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Test_Collider_Extensions)
namespace HoudiniEngineUnity {
class __Test_Collider_Extensions____c;
}
namespace HoudiniEngineUnity {
class Test_Collider;
}
namespace UnityEngine {
class Collider;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Collider_Extensions;
}
namespace HoudiniEngineUnity {
class __Test_Collider_Extensions____c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Collider_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::__Test_Collider_Extensions____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9914))
// CS Name: ::Test_Collider_Extensions::<>c*
class CORDL_TYPE __Test_Collider_Extensions____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HoudiniEngineUnity::__Test_Collider_Extensions____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>* __9__2_0;

  static inline void setStaticF___9(::HoudiniEngineUnity::__Test_Collider_Extensions____c* value);

  static inline ::HoudiniEngineUnity::__Test_Collider_Extensions____c* getStaticF___9();

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>* value);

  static inline ::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>* getStaticF___9__1_0();

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>* value);

  static inline ::System::Converter_2<::UnityEngine::Collider*, ::HoudiniEngineUnity::Test_Collider*>* getStaticF___9__2_0();

  static inline ::HoudiniEngineUnity::__Test_Collider_Extensions____c* New_ctor();

  /// @brief Method .ctor, addr 0x21e5604, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <ToTestObject>b__1_0, addr 0x21e560c, size 0x64, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Collider* _ToTestObject_b__1_0(::UnityEngine::Collider* lod);

  /// @brief Method <ToTestObject>b__2_0, addr 0x21e5670, size 0x64, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Collider* _ToTestObject_b__2_0(::UnityEngine::Collider* lod);

  // Ctor Parameters [CppParam { name: "", ty: "__Test_Collider_Extensions____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Test_Collider_Extensions____c(__Test_Collider_Extensions____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Test_Collider_Extensions____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Test_Collider_Extensions____c(__Test_Collider_Extensions____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Test_Collider_Extensions____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__Test_Collider_Extensions____c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_Collider_Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9915))
// CS Name: ::HoudiniEngineUnity::Test_Collider_Extensions*
class CORDL_TYPE Test_Collider_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::__Test_Collider_Extensions____c;

  /// @brief Method ToTestObject, addr 0x21e2328, size 0x64, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_Collider* ToTestObject(::UnityEngine::Collider* self);

  /// @brief Method ToTestObject, addr 0x21e53ac, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_Collider*, ::Array<::HoudiniEngineUnity::Test_Collider*>*>
  ToTestObject(::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> self);

  /// @brief Method ToTestObject, addr 0x21e54a4, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Collider*>* ToTestObject(::System::Collections::Generic::List_1<::UnityEngine::Collider*>* self);

  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Collider_Extensions(Test_Collider_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Collider_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Collider_Extensions(Test_Collider_Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Collider_Extensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Collider_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Collider_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Collider_Extensions*, "HoudiniEngineUnity", "Test_Collider_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::__Test_Collider_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__Test_Collider_Extensions____c*, "HoudiniEngineUnity", "Test_Collider_Extensions/<>c");
