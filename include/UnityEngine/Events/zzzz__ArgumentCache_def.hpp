#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgumentCache)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
class ArgumentCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::ArgumentCache);
// Type: UnityEngine.Events::ArgumentCache
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Events {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10449))
// CS Name: ::UnityEngine.Events::ArgumentCache*
class CORDL_TYPE ArgumentCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ObjectArgument, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ObjectArgument, put = __set_m_ObjectArgument))::UnityEngine::Object* m_ObjectArgument;

  /// @brief Field m_ObjectArgumentAssemblyTypeName, offset 0x18, size 0x8
  __declspec(property(get = __get_m_ObjectArgumentAssemblyTypeName, put = __set_m_ObjectArgumentAssemblyTypeName))::StringW m_ObjectArgumentAssemblyTypeName;

  /// @brief Field m_IntArgument, offset 0x20, size 0x4
  __declspec(property(get = __get_m_IntArgument, put = __set_m_IntArgument)) int32_t m_IntArgument;

  /// @brief Field m_FloatArgument, offset 0x24, size 0x4
  __declspec(property(get = __get_m_FloatArgument, put = __set_m_FloatArgument)) float_t m_FloatArgument;

  /// @brief Field m_StringArgument, offset 0x28, size 0x8
  __declspec(property(get = __get_m_StringArgument, put = __set_m_StringArgument))::StringW m_StringArgument;

  /// @brief Field m_BoolArgument, offset 0x30, size 0x1
  __declspec(property(get = __get_m_BoolArgument, put = __set_m_BoolArgument)) bool m_BoolArgument;

  __declspec(property(get = get_unityObjectArgument))::UnityEngine::Object* unityObjectArgument;

  __declspec(property(get = get_unityObjectArgumentAssemblyTypeName))::StringW unityObjectArgumentAssemblyTypeName;

  __declspec(property(get = get_intArgument)) int32_t intArgument;

  __declspec(property(get = get_floatArgument)) float_t floatArgument;

  __declspec(property(get = get_stringArgument))::StringW stringArgument;

  __declspec(property(get = get_boolArgument)) bool boolArgument;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  constexpr ::UnityEngine::Object*& __get_m_ObjectArgument();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_m_ObjectArgument() const;

  constexpr void __set_m_ObjectArgument(::UnityEngine::Object* value);

  constexpr ::StringW& __get_m_ObjectArgumentAssemblyTypeName();

  constexpr ::StringW const& __get_m_ObjectArgumentAssemblyTypeName() const;

  constexpr void __set_m_ObjectArgumentAssemblyTypeName(::StringW value);

  constexpr int32_t& __get_m_IntArgument();

  constexpr int32_t const& __get_m_IntArgument() const;

  constexpr void __set_m_IntArgument(int32_t value);

  constexpr float_t& __get_m_FloatArgument();

  constexpr float_t const& __get_m_FloatArgument() const;

  constexpr void __set_m_FloatArgument(float_t value);

  constexpr ::StringW& __get_m_StringArgument();

  constexpr ::StringW const& __get_m_StringArgument() const;

  constexpr void __set_m_StringArgument(::StringW value);

  constexpr bool& __get_m_BoolArgument();

  constexpr bool const& __get_m_BoolArgument() const;

  constexpr void __set_m_BoolArgument(bool value);

  /// @brief Method get_unityObjectArgument, addr 0x2cf83b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Object* get_unityObjectArgument();

  /// @brief Method get_unityObjectArgumentAssemblyTypeName, addr 0x2cf83b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_unityObjectArgumentAssemblyTypeName();

  /// @brief Method get_intArgument, addr 0x2cf83c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_intArgument();

  /// @brief Method get_floatArgument, addr 0x2cf83c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatArgument();

  /// @brief Method get_stringArgument, addr 0x2cf83d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_stringArgument();

  /// @brief Method get_boolArgument, addr 0x2cf83d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_boolArgument();

  /// @brief Method OnBeforeSerialize, addr 0x2cf83e0, size 0x1c, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnAfterDeserialize, addr 0x2cf83fc, size 0x1c, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  static inline ::UnityEngine::Events::ArgumentCache* New_ctor();

  /// @brief Method .ctor, addr 0x2cf8418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgumentCache(ArgumentCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgumentCache(ArgumentCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentCache();

public:
  /// @brief Field m_ObjectArgument, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Object* ___m_ObjectArgument;

  /// @brief Field m_ObjectArgumentAssemblyTypeName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___m_ObjectArgumentAssemblyTypeName;

  /// @brief Field m_IntArgument, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_IntArgument;

  /// @brief Field m_FloatArgument, offset: 0x24, size: 0x4, def value: None
  float_t ___m_FloatArgument;

  /// @brief Field m_StringArgument, offset: 0x28, size: 0x8, def value: None
  ::StringW ___m_StringArgument;

  /// @brief Field m_BoolArgument, offset: 0x30, size: 0x1, def value: None
  bool ___m_BoolArgument;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::ArgumentCache, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_ObjectArgument) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_ObjectArgumentAssemblyTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_IntArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_FloatArgument) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_StringArgument) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_BoolArgument) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::ArgumentCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::ArgumentCache*, "UnityEngine.Events", "ArgumentCache");
