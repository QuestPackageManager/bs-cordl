#pragma once
// IWYU pragma private; include "UnityEngine/Events/ArgumentCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArgumentCache)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
class ArgumentCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Events::ArgumentCache);
// Dependencies System.Object, UnityEngine.ISerializationCallbackReceiver
namespace UnityEngine::Events {
// Is value type: false
// CS Name: UnityEngine.Events.ArgumentCache
class CORDL_TYPE ArgumentCache : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_boolArgument)) bool boolArgument;

  __declspec(property(get = get_floatArgument)) float_t floatArgument;

  __declspec(property(get = get_intArgument)) int32_t intArgument;

  /// @brief Field m_BoolArgument, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BoolArgument, put = __cordl_internal_set_m_BoolArgument)) bool m_BoolArgument;

  /// @brief Field m_FloatArgument, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FloatArgument, put = __cordl_internal_set_m_FloatArgument)) float_t m_FloatArgument;

  /// @brief Field m_IntArgument, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntArgument, put = __cordl_internal_set_m_IntArgument)) int32_t m_IntArgument;

  /// @brief Field m_ObjectArgument, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ObjectArgument, put = __cordl_internal_set_m_ObjectArgument)) ::UnityW<::UnityEngine::Object> m_ObjectArgument;

  /// @brief Field m_ObjectArgumentAssemblyTypeName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ObjectArgumentAssemblyTypeName, put = __cordl_internal_set_m_ObjectArgumentAssemblyTypeName)) ::StringW m_ObjectArgumentAssemblyTypeName;

  /// @brief Field m_StringArgument, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StringArgument, put = __cordl_internal_set_m_StringArgument)) ::StringW m_StringArgument;

  __declspec(property(get = get_stringArgument)) ::StringW stringArgument;

  __declspec(property(get = get_unityObjectArgument)) ::UnityW<::UnityEngine::Object> unityObjectArgument;

  __declspec(property(get = get_unityObjectArgumentAssemblyTypeName)) ::StringW unityObjectArgumentAssemblyTypeName;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  static inline ::UnityEngine::Events::ArgumentCache* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x48be0c4, size 0x1c, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x48be0a8, size 0x1c, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  constexpr bool const& __cordl_internal_get_m_BoolArgument() const;

  constexpr bool& __cordl_internal_get_m_BoolArgument();

  constexpr float_t const& __cordl_internal_get_m_FloatArgument() const;

  constexpr float_t& __cordl_internal_get_m_FloatArgument();

  constexpr int32_t const& __cordl_internal_get_m_IntArgument() const;

  constexpr int32_t& __cordl_internal_get_m_IntArgument();

  constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_m_ObjectArgument() const;

  constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_m_ObjectArgument();

  constexpr ::StringW const& __cordl_internal_get_m_ObjectArgumentAssemblyTypeName() const;

  constexpr ::StringW& __cordl_internal_get_m_ObjectArgumentAssemblyTypeName();

  constexpr ::StringW const& __cordl_internal_get_m_StringArgument() const;

  constexpr ::StringW& __cordl_internal_get_m_StringArgument();

  constexpr void __cordl_internal_set_m_BoolArgument(bool value);

  constexpr void __cordl_internal_set_m_FloatArgument(float_t value);

  constexpr void __cordl_internal_set_m_IntArgument(int32_t value);

  constexpr void __cordl_internal_set_m_ObjectArgument(::UnityW<::UnityEngine::Object> value);

  constexpr void __cordl_internal_set_m_ObjectArgumentAssemblyTypeName(::StringW value);

  constexpr void __cordl_internal_set_m_StringArgument(::StringW value);

  /// @brief Method .ctor, addr 0x48be0e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_boolArgument, addr 0x48be0a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_boolArgument();

  /// @brief Method get_floatArgument, addr 0x48be090, size 0x8, virtual false, abstract: false, final false
  inline float_t get_floatArgument();

  /// @brief Method get_intArgument, addr 0x48be088, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_intArgument();

  /// @brief Method get_stringArgument, addr 0x48be098, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_stringArgument();

  /// @brief Method get_unityObjectArgument, addr 0x48be078, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Object> get_unityObjectArgument();

  /// @brief Method get_unityObjectArgumentAssemblyTypeName, addr 0x48be080, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_unityObjectArgumentAssemblyTypeName();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgumentCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgumentCache(ArgumentCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgumentCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgumentCache(ArgumentCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10977 };

  /// @brief Field m_ObjectArgument, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Object> ___m_ObjectArgument;

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
static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_ObjectArgument) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_ObjectArgumentAssemblyTypeName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_IntArgument) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_FloatArgument) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_StringArgument) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Events::ArgumentCache, ___m_BoolArgument) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Events::ArgumentCache, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Events
NEED_NO_BOX(::UnityEngine::Events::ArgumentCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Events::ArgumentCache*, "UnityEngine.Events", "ArgumentCache");
