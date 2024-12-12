#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_TreeInstance_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_TreeInstance_Extensions)
namespace HoudiniEngineUnity {
class Test_TreeInstance_Extensions___c;
}
namespace HoudiniEngineUnity {
class Test_TreeInstance;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
namespace UnityEngine {
struct TreeInstance;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_TreeInstance_Extensions;
}
namespace HoudiniEngineUnity {
class Test_TreeInstance_Extensions___c;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_TreeInstance_Extensions);
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_TreeInstance_Extensions___c);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_TreeInstance_Extensions/<>c
class CORDL_TYPE Test_TreeInstance_Extensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::HoudiniEngineUnity::Test_TreeInstance_Extensions___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>* __9__1_0;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>* __9__2_0;

  static inline ::HoudiniEngineUnity::Test_TreeInstance_Extensions___c* New_ctor();

  /// @brief Method <ToTestObject>b__1_0, addr 0x3a9c99c, size 0x80, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_TreeInstance* _ToTestObject_b__1_0(::UnityEngine::TreeInstance lod);

  /// @brief Method <ToTestObject>b__2_0, addr 0x3a9ca1c, size 0x80, virtual false, abstract: false, final false
  inline ::HoudiniEngineUnity::Test_TreeInstance* _ToTestObject_b__2_0(::UnityEngine::TreeInstance lod);

  /// @brief Method .ctor, addr 0x3a9c994, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::Test_TreeInstance_Extensions___c* getStaticF___9();

  static inline ::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>* getStaticF___9__1_0();

  static inline ::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>* getStaticF___9__2_0();

  static inline void setStaticF___9(::HoudiniEngineUnity::Test_TreeInstance_Extensions___c* value);

  static inline void setStaticF___9__1_0(::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>* value);

  static inline void setStaticF___9__2_0(::System::Converter_2<::UnityEngine::TreeInstance, ::HoudiniEngineUnity::Test_TreeInstance*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_TreeInstance_Extensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance_Extensions___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_TreeInstance_Extensions___c(Test_TreeInstance_Extensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance_Extensions___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_TreeInstance_Extensions___c(Test_TreeInstance_Extensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11922 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_TreeInstance_Extensions___c, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_TreeInstance_Extensions
class CORDL_TYPE Test_TreeInstance_Extensions : public ::System::Object {
public:
  // Declarations
  using __c = ::HoudiniEngineUnity::Test_TreeInstance_Extensions___c;

  /// @brief Method ToTestObject, addr 0x3a9c750, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<::HoudiniEngineUnity::Test_TreeInstance*, ::Array<::HoudiniEngineUnity::Test_TreeInstance*>*>
  ToTestObject(::ArrayW<::UnityEngine::TreeInstance, ::Array<::UnityEngine::TreeInstance>*> self);

  /// @brief Method ToTestObject, addr 0x3a9c6d0, size 0x80, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_TreeInstance* ToTestObject(::UnityEngine::TreeInstance self);

  /// @brief Method ToTestObject, addr 0x3a9c840, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::Test_TreeInstance*>* ToTestObject(::System::Collections::Generic::List_1<::UnityEngine::TreeInstance>* self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_TreeInstance_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_TreeInstance_Extensions(Test_TreeInstance_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_TreeInstance_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_TreeInstance_Extensions(Test_TreeInstance_Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11923 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_TreeInstance_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_TreeInstance_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TreeInstance_Extensions*, "HoudiniEngineUnity", "Test_TreeInstance_Extensions");
NEED_NO_BOX(::HoudiniEngineUnity::Test_TreeInstance_Extensions___c);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_TreeInstance_Extensions___c*, "HoudiniEngineUnity", "Test_TreeInstance_Extensions/<>c");
