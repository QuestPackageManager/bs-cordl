#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultSerializationBinder)
namespace Newtonsoft::Json::Serialization {
struct __DefaultSerializationBinder__TypeNameKey;
}
namespace Newtonsoft::Json::Utilities {
template <typename TKey, typename TValue> class ThreadSafeStore_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultSerializationBinder;
}
namespace Newtonsoft::Json::Serialization {
struct __DefaultSerializationBinder__TypeNameKey;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DefaultSerializationBinder);
MARK_VAL_T(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey);
// Type: ::TypeNameKey
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: true
// CS Name: ::DefaultSerializationBinder::TypeNameKey
struct CORDL_TYPE __DefaultSerializationBinder__TypeNameKey {
public:
  // Declarations
  /// @brief Method Equals, addr 0x27c93a8, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x27c9420, size 0x48, virtual false, abstract: false, final false
  inline bool Equals(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey other);

  /// @brief Method GetHashCode, addr 0x27c9358, size 0x50, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x27c9228, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW assemblyName, ::StringW typeName);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DefaultSerializationBinder__TypeNameKey();

  // Ctor Parameters [CppParam { name: "AssemblyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "TypeName", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __DefaultSerializationBinder__TypeNameKey(::StringW AssemblyName, ::StringW TypeName) noexcept;

  /// @brief Field AssemblyName, offset: 0x0, size: 0x8, def value: None
  ::StringW AssemblyName;

  /// @brief Field TypeName, offset: 0x8, size: 0x8, def value: None
  ::StringW TypeName;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, 0x10>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, AssemblyName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, TypeName) == 0x8, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::DefaultSerializationBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::DefaultSerializationBinder*
class CORDL_TYPE DefaultSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder {
public:
  // Declarations
  using TypeNameKey = ::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Newtonsoft::Json::Serialization::DefaultSerializationBinder* Instance;

  /// @brief Field _typeCache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__typeCache,
                      put = __cordl_internal_set__typeCache))::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey,
                                                                                                              ::System::Type*>* _typeCache;

  /// @brief Method BindToType, addr 0x27c91c0, size 0x68, virtual true, abstract: false, final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  /// @brief Method GetTypeFromTypeNameKey, addr 0x27c8fa0, size 0x220, virtual false, abstract: false, final false
  static inline ::System::Type* GetTypeFromTypeNameKey(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey typeNameKey);

  static inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* New_ctor();

  constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, ::System::Type*>*& __cordl_internal_get__typeCache();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, ::System::Type*>*> const&
  __cordl_internal_get__typeCache() const;

  constexpr void
  __cordl_internal_set__typeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, ::System::Type*>* value);

  /// @brief Method .ctor, addr 0x27c9230, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* getStaticF_Instance();

  static inline void setStaticF_Instance(::Newtonsoft::Json::Serialization::DefaultSerializationBinder* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSerializationBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultSerializationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSerializationBinder(DefaultSerializationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSerializationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSerializationBinder(DefaultSerializationBinder const&) = delete;

  /// @brief Field _typeCache, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, ::System::Type*>* ____typeCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DefaultSerializationBinder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::DefaultSerializationBinder, ____typeCache) == 0x10, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultSerializationBinder*, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder");
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__DefaultSerializationBinder__TypeNameKey, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder/TypeNameKey");
