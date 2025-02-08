#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Material_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Material_Extensions)
namespace HoudiniEngineUnity {
class Test_Material_Extensions___c;
}
namespace HoudiniEngineUnity {
class Test_Material;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Material_Extensions;
}
namespace HoudiniEngineUnity {
class Test_Material_Extensions___c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Material_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Material_Extensions___c);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_Material_Extensions/<>c
class CORDL_TYPE Test_Material_Extensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HoudiniEngineUnity::Test_Material_Extensions___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Converter_2<::UnityW<::UnityEngine::Material>, ::HoudiniEngineUnity::Test_Material*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Converter_2<::UnityW<::UnityEngine::Material>, ::HoudiniEngineUnity::Test_Material*>* __9__2_0;

  static inline ::HoudiniEngineUnity::Test_Material_Extensions___c* New_ctor();

  /// @brief Method <ToTestObject>b__1_0, addr 0x3a9e360, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Material* _ToTestObject_b__1_0(::UnityEngine::Material* lod);

  /// @brief Method <ToTestObject>b__2_0, addr 0x3a9e3bc, size 0x5c, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_Material* _ToTestObject_b__2_0(::UnityEngine::Material* lod);

  /// @brief Method .ctor, addr 0x3a9e358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::Test_Material_Extensions___c* getStaticF___9();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::Material>, ::HoudiniEngineUnity::Test_Material*>* getStaticF___9__1_0();

  static inline ::System::Converter_2<::UnityW<::UnityEngine::Material>, ::HoudiniEngineUnity::Test_Material*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::Test_Material_Extensions___c* value);

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityW<::UnityEngine::Material>, ::HoudiniEngineUnity::Test_Material*>* value);

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityW<::UnityEngine::Material>, ::HoudiniEngineUnity::Test_Material*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Material_Extensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Material_Extensions___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Material_Extensions___c(Test_Material_Extensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Material_Extensions___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Material_Extensions___c(Test_Material_Extensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Material_Extensions___c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_Material_Extensions
class CORDL_TYPE Test_Material_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::Test_Material_Extensions___c;

  /// @brief Method ToTestObject, addr 0x3a9e0e4, size 0x120, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_Material*, ::Array<::HoudiniEngineUnity::Test_Material*>*>
  ToTestObject(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> self);

  /// @brief Method ToTestObject, addr 0x3a9e088, size 0x5c, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_Material* ToTestObject(::UnityEngine::Material* self);

  /// @brief Method ToTestObject, addr 0x3a9e204, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_Material*>* ToTestObject(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Material_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Material_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Material_Extensions(Test_Material_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Material_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Material_Extensions(Test_Material_Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Material_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Material_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Material_Extensions*, "HoudiniEngineUnity", "Test_Material_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::Test_Material_Extensions___c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Material_Extensions___c*, "HoudiniEngineUnity", "Test_Material_Extensions/<>c");
