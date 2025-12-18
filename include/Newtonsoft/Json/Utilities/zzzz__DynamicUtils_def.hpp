#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DynamicUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicUtils)
namespace Newtonsoft::Json::Utilities {
class DynamicUtils_BinderWrapper;
}
namespace Newtonsoft::Json::Utilities {
template <typename T, typename TResult> class MethodCall_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Dynamic {
class IDynamicMetaObjectProvider;
}
namespace System::Runtime::CompilerServices {
class CallSiteBinder;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class DynamicUtils;
}
namespace Newtonsoft::Json::Utilities {
class DynamicUtils_BinderWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::DynamicUtils);
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::DynamicUtils_BinderWrapper);
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.DynamicUtils/BinderWrapper
class CORDL_TYPE DynamicUtils_BinderWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _getCSharpArgumentInfoArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__getCSharpArgumentInfoArray, put = setStaticF__getCSharpArgumentInfoArray)) ::System::Object* _getCSharpArgumentInfoArray;

  /// @brief Field _getMemberCall, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__getMemberCall, put = setStaticF__getMemberCall)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _getMemberCall;

  /// @brief Field _init, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__init, put = setStaticF__init)) bool _init;

  /// @brief Field _setCSharpArgumentInfoArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__setCSharpArgumentInfoArray, put = setStaticF__setCSharpArgumentInfoArray)) ::System::Object* _setCSharpArgumentInfoArray;

  /// @brief Field _setMemberCall, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__setMemberCall, put = setStaticF__setMemberCall)) ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* _setMemberCall;

  /// @brief Method CreateMemberCalls, addr 0x5b771ac, size 0x4f4, virtual false, abstract: false, final false
  static inline void CreateMemberCalls();

  /// @brief Method CreateSharpArgumentInfoArray, addr 0x5b76ecc, size 0x2e0, virtual false, abstract: false, final false
  static inline ::System::Object* CreateSharpArgumentInfoArray(::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method GetMember, addr 0x5b776a0, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::CallSiteBinder* GetMember(::StringW name, ::System::Type* context);

  /// @brief Method Init, addr 0x5b76cfc, size 0x1d0, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method SetMember, addr 0x5b77870, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::CallSiteBinder* SetMember(::StringW name, ::System::Type* context);

  static inline ::System::Object* getStaticF__getCSharpArgumentInfoArray();

  static inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* getStaticF__getMemberCall();

  static inline bool getStaticF__init();

  static inline ::System::Object* getStaticF__setCSharpArgumentInfoArray();

  static inline ::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* getStaticF__setMemberCall();

  static inline void setStaticF__getCSharpArgumentInfoArray(::System::Object* value);

  static inline void setStaticF__getMemberCall(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

  static inline void setStaticF__init(bool value);

  static inline void setStaticF__setCSharpArgumentInfoArray(::System::Object* value);

  static inline void setStaticF__setMemberCall(::Newtonsoft::Json::Utilities::MethodCall_2<::System::Object*, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicUtils_BinderWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicUtils_BinderWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicUtils_BinderWrapper(DynamicUtils_BinderWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicUtils_BinderWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicUtils_BinderWrapper(DynamicUtils_BinderWrapper const&) = delete;

  /// @brief Field BinderTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString BinderTypeName{ u"Microsoft.CSharp.RuntimeBinder.Binder, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a" };

  /// @brief Field CSharpArgumentInfoFlagsTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString CSharpArgumentInfoFlagsTypeName{
    u"Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"
  };

  /// @brief Field CSharpArgumentInfoTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString CSharpArgumentInfoTypeName{
    u"Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a"
  };

  /// @brief Field CSharpAssemblyName offset 0xffffffff size 0x8
  static constexpr ::ConstString CSharpAssemblyName{ u"Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a" };

  /// @brief Field CSharpBinderFlagsTypeName offset 0xffffffff size 0x8
  static constexpr ::ConstString CSharpBinderFlagsTypeName{ u"Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::DynamicUtils_BinderWrapper, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
// Dependencies System.Object
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: Newtonsoft.Json.Utilities.DynamicUtils
class CORDL_TYPE DynamicUtils : public ::System::Object {
public:
  // Declarations
  using BinderWrapper = ::Newtonsoft::Json::Utilities::DynamicUtils_BinderWrapper;

  /// @brief Method GetDynamicMemberNames, addr 0x5b76c0c, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetDynamicMemberNames(::System::Dynamic::IDynamicMetaObjectProvider* dynamicProvider);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicUtils(DynamicUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicUtils(DynamicUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13384 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::DynamicUtils, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::DynamicUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DynamicUtils*, "Newtonsoft.Json.Utilities", "DynamicUtils");
NEED_NO_BOX(::Newtonsoft::Json::Utilities::DynamicUtils_BinderWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::DynamicUtils_BinderWrapper*, "Newtonsoft.Json.Utilities", "DynamicUtils/BinderWrapper");
