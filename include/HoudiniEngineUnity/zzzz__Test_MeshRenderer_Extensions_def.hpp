#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_MeshRenderer_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Test_MeshRenderer_Extensions)
namespace HoudiniEngineUnity {
class Test_MeshRenderer;
}
namespace HoudiniEngineUnity {
class __Test_MeshRenderer_Extensions____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_MeshRenderer_Extensions;
}
namespace HoudiniEngineUnity {
class __Test_MeshRenderer_Extensions____c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_MeshRenderer_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::Test_MeshRenderer_Extensions::<>c*
class CORDL_TYPE __Test_MeshRenderer_Extensions____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Converter_2<::UnityW<::UnityEngine::MeshRenderer>, ::HoudiniEngineUnity::Test_MeshRenderer*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Converter_2<::UnityW<::UnityEngine::MeshRenderer>, ::HoudiniEngineUnity::Test_MeshRenderer*>* __9__2_0;

  static inline ::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c* New_ctor();

  /// @brief Method <ToTestObject>b__1_0, addr 0x25e2178, size 0x64, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_MeshRenderer* _ToTestObject_b__1_0(::UnityEngine::MeshRenderer* lod);

  /// @brief Method <ToTestObject>b__2_0, addr 0x25e21dc, size 0x64, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_MeshRenderer* _ToTestObject_b__2_0(::UnityEngine::MeshRenderer* lod);

  /// @brief Method .ctor, addr 0x25e2170, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c* getStaticF___9();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::MeshRenderer>, ::HoudiniEngineUnity::Test_MeshRenderer*>* getStaticF___9__1_0();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::MeshRenderer>, ::HoudiniEngineUnity::Test_MeshRenderer*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c* value);

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityW<::UnityEngine::MeshRenderer>, ::HoudiniEngineUnity::Test_MeshRenderer*>* value);

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityW<::UnityEngine::MeshRenderer>, ::HoudiniEngineUnity::Test_MeshRenderer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Test_MeshRenderer_Extensions____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Test_MeshRenderer_Extensions____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Test_MeshRenderer_Extensions____c(__Test_MeshRenderer_Extensions____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Test_MeshRenderer_Extensions____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Test_MeshRenderer_Extensions____c(__Test_MeshRenderer_Extensions____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Type: HoudiniEngineUnity::Test_MeshRenderer_Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_MeshRenderer_Extensions*
class CORDL_TYPE Test_MeshRenderer_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c;

  /// @brief Method ToTestObject, addr 0x25e1f18, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_MeshRenderer*, ::Array<::HoudiniEngineUnity::Test_MeshRenderer*>*>
  ToTestObject(::ArrayW<::UnityEngine::MeshRenderer*, ::Array<::UnityEngine::MeshRenderer*>*> self);

  /// @brief Method ToTestObject, addr 0x25de1cc, size 0x64, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_MeshRenderer* ToTestObject(::UnityEngine::MeshRenderer* self);

  /// @brief Method ToTestObject, addr 0x25e2010, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_MeshRenderer*>* ToTestObject(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_MeshRenderer_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_MeshRenderer_Extensions(Test_MeshRenderer_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_MeshRenderer_Extensions(Test_MeshRenderer_Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_MeshRenderer_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_MeshRenderer_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_MeshRenderer_Extensions*, "HoudiniEngineUnity", "Test_MeshRenderer_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::__Test_MeshRenderer_Extensions____c*, "HoudiniEngineUnity", "Test_MeshRenderer_Extensions/<>c");
