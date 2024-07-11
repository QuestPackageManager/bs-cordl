#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonDynamicContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JsonDynamicContract)
namespace Newtonsoft::Json::Serialization {
class JsonPropertyCollection;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace System::Dynamic {
class IDynamicMetaObjectProvider;
}
namespace System::Runtime::CompilerServices {
template <typename T> class CallSite_1;
}
namespace System::Runtime::CompilerServices {
class CallSite;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonDynamicContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonDynamicContract);
// Type: Newtonsoft.Json.Serialization::JsonDynamicContract
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::JsonDynamicContract*
class CORDL_TYPE JsonDynamicContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  __declspec(property(get = get_Properties))::Newtonsoft::Json::Serialization::JsonPropertyCollection* Properties;

  __declspec(property(get = get_PropertyNameResolver, put = set_PropertyNameResolver))::System::Func_2<::StringW, ::StringW>* PropertyNameResolver;

  /// @brief Field <Properties>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__Properties_k__BackingField,
                      put = __cordl_internal_set__Properties_k__BackingField))::Newtonsoft::Json::Serialization::JsonPropertyCollection* _Properties_k__BackingField;

  /// @brief Field <PropertyNameResolver>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__PropertyNameResolver_k__BackingField,
                      put = __cordl_internal_set__PropertyNameResolver_k__BackingField))::System::Func_2<::StringW, ::StringW>* _PropertyNameResolver_k__BackingField;

  /// @brief Field _callSiteGetters, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__callSiteGetters, put = __cordl_internal_set__callSiteGetters))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>* _callSiteGetters;

  /// @brief Field _callSiteSetters, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__callSiteSetters, put = __cordl_internal_set__callSiteSetters))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW,
      ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>* _callSiteSetters;

  /// @brief Method CreateCallSiteGetter, addr 0x2a60d60, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*
  CreateCallSiteGetter(::StringW name);

  /// @brief Method CreateCallSiteSetter, addr 0x2a60e94, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*
  CreateCallSiteSetter(::StringW name);

  static inline ::Newtonsoft::Json::Serialization::JsonDynamicContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method TryGetMember, addr 0x2a60fc8, size 0x100, virtual false, abstract: false, final false
  inline bool TryGetMember(::System::Dynamic::IDynamicMetaObjectProvider* dynamicProvider, ::StringW name, ByRef<::System::Object*> value);

  /// @brief Method TrySetMember, addr 0x2a610c8, size 0xfc, virtual false, abstract: false, final false
  inline bool TrySetMember(::System::Dynamic::IDynamicMetaObjectProvider* dynamicProvider, ::StringW name, ::System::Object* value);

  constexpr ::Newtonsoft::Json::Serialization::JsonPropertyCollection*& __cordl_internal_get__Properties_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::JsonPropertyCollection*> const& __cordl_internal_get__Properties_k__BackingField() const;

  constexpr ::System::Func_2<::StringW, ::StringW>*& __cordl_internal_get__PropertyNameResolver_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::StringW, ::StringW>*> const& __cordl_internal_get__PropertyNameResolver_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>*&
  __cordl_internal_get__callSiteGetters();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>*> const&
  __cordl_internal_get__callSiteGetters() const;

  constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>*&
  __cordl_internal_get__callSiteSetters();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>*> const&
  __cordl_internal_get__callSiteSetters() const;

  constexpr void __cordl_internal_set__Properties_k__BackingField(::Newtonsoft::Json::Serialization::JsonPropertyCollection* value);

  constexpr void __cordl_internal_set__PropertyNameResolver_k__BackingField(::System::Func_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__callSiteGetters(
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
          ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>* value);

  constexpr void __cordl_internal_set__callSiteSetters(
      ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
          ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>*
          value);

  /// @brief Method .ctor, addr 0x2a5b260, size 0x1a4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method get_Properties, addr 0x2a60d48, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_Properties();

  /// @brief Method get_PropertyNameResolver, addr 0x2a60d50, size 0x8, virtual false, abstract: false, final false
  inline ::System::Func_2<::StringW, ::StringW>* get_PropertyNameResolver();

  /// @brief Method set_PropertyNameResolver, addr 0x2a60d58, size 0x8, virtual false, abstract: false, final false
  inline void set_PropertyNameResolver(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonDynamicContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JsonDynamicContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonDynamicContract(JsonDynamicContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonDynamicContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonDynamicContract(JsonDynamicContract const&) = delete;

  /// @brief Field <Properties>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::JsonPropertyCollection* ____Properties_k__BackingField;

  /// @brief Field <PropertyNameResolver>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::System::Func_2<::StringW, ::StringW>* ____PropertyNameResolver_k__BackingField;

  /// @brief Field _callSiteGetters, offset: 0xd0, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_3<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*>*>*>* ____callSiteGetters;

  /// @brief Field _callSiteSetters, offset: 0xd8, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<
      ::StringW, ::System::Runtime::CompilerServices::CallSite_1<::System::Func_4<::System::Runtime::CompilerServices::CallSite*, ::System::Object*, ::System::Object*, ::System::Object*>*>*>*
      ____callSiteSetters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonDynamicContract, 0xe0>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDynamicContract, ____Properties_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDynamicContract, ____PropertyNameResolver_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDynamicContract, ____callSiteGetters) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonDynamicContract, ____callSiteSetters) == 0xd8, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonDynamicContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonDynamicContract*, "Newtonsoft.Json.Serialization", "JsonDynamicContract");
