#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplayStats_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplayStats_1)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1_AccumulatedTiming;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> struct DebugDisplayStats_1_DebugProfilingType;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass19_0;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass19_1;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass19_2;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass6_0;
}
namespace UnityEngine::Rendering {
class DebugUI_Value;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
template <typename T> class ObservableList_1;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename TProfileId> struct DebugDisplayStats_1_DebugProfilingType;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1_AccumulatedTiming;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass19_0;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass19_1;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass19_2;
}
namespace UnityEngine::Rendering {
template <typename TProfileId> class DebugDisplayStats_1___c__DisplayClass6_0;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayStats_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1/AccumulatedTiming<TProfileId>
class CORDL_TYPE DebugDisplayStats_1_AccumulatedTiming : public ::System::Object {
public:
  // Declarations
  /// @brief Field accumulatedValue, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_accumulatedValue, put = __cordl_internal_set_accumulatedValue)) float_t accumulatedValue;

  /// @brief Field lastAverage, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_lastAverage, put = __cordl_internal_set_lastAverage)) float_t lastAverage;

  static inline ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>* New_ctor();

  /// @brief Method UpdateLastAverage, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateLastAverage(int32_t frameCount);

  constexpr float_t const& __cordl_internal_get_accumulatedValue() const;

  constexpr float_t& __cordl_internal_get_accumulatedValue();

  constexpr float_t const& __cordl_internal_get_lastAverage() const;

  constexpr float_t& __cordl_internal_get_lastAverage();

  constexpr void __cordl_internal_set_accumulatedValue(float_t value);

  constexpr void __cordl_internal_set_lastAverage(float_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayStats_1_AccumulatedTiming();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1_AccumulatedTiming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayStats_1_AccumulatedTiming(DebugDisplayStats_1_AccumulatedTiming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1_AccumulatedTiming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayStats_1_AccumulatedTiming(DebugDisplayStats_1_AccumulatedTiming const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11940 };

  /// @brief Field accumulatedValue, offset: 0x10, size: 0x4, def value: None
  float_t ___accumulatedValue;

  /// @brief Field lastAverage, offset: 0x14, size: 0x4, def value: None
  float_t ___lastAverage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1/DebugProfilingType<TProfileId>
struct CORDL_TYPE DebugDisplayStats_1_DebugProfilingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugDisplayStats_1_DebugProfilingType_Unwrapped
  enum struct __DebugDisplayStats_1_DebugProfilingType_Unwrapped : int32_t {
    __E_CPU = static_cast<int32_t>(0x0),
    __E_InlineCPU = static_cast<int32_t>(0x1),
    __E_GPU = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugDisplayStats_1_DebugProfilingType_Unwrapped() const noexcept {
    return static_cast<__DebugDisplayStats_1_DebugProfilingType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayStats_1_DebugProfilingType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugDisplayStats_1_DebugProfilingType(int32_t value__) noexcept;

  /// @brief Field CPU value: I32(0)
  static ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> const CPU;

  /// @brief Field GPU value: I32(2)
  static ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> const GPU;

  /// @brief Field InlineCPU value: I32(1)
  static ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> const InlineCPU;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11941 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.DebugDisplayStats`1::DebugProfilingType<TProfileId>
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1/<>c__DisplayClass19_0<TProfileId>
class CORDL_TYPE DebugDisplayStats_1___c__DisplayClass19_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* __4__this;

  /// @brief Field sampler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_sampler, put = __cordl_internal_set_sampler)) ::UnityEngine::Rendering::ProfilingSampler* sampler;

  /// @brief Field samplerId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_samplerId, put = __cordl_internal_set_samplerId)) TProfileId samplerId;

  /// @brief Field type, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> type;

  static inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>* New_ctor();

  /// @brief Method <BuildProfilingSamplerWidgetList>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Object* _BuildProfilingSamplerWidgetList_b__1();

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*& __cordl_internal_get___4__this();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_sampler();

  constexpr TProfileId const& __cordl_internal_get_samplerId() const;

  constexpr TProfileId& __cordl_internal_get_samplerId();

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>& __cordl_internal_get_type();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* value);

  constexpr void __cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_samplerId(TProfileId value);

  constexpr void __cordl_internal_set_type(::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayStats_1___c__DisplayClass19_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass19_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayStats_1___c__DisplayClass19_0(DebugDisplayStats_1___c__DisplayClass19_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass19_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayStats_1___c__DisplayClass19_0(DebugDisplayStats_1___c__DisplayClass19_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11942 };

  /// @brief Field samplerId, offset: 0x10, size: 0x8, def value: None
  TProfileId ___samplerId;

  /// @brief Field sampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___sampler;

  /// @brief Field type, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> ___type;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1/<>c__DisplayClass19_1<TProfileId>
class CORDL_TYPE DebugDisplayStats_1___c__DisplayClass19_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* __4__this;

  /// @brief Field samplerId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_samplerId, put = __cordl_internal_set_samplerId)) TProfileId samplerId;

  static inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* New_ctor();

  /// @brief Method <BuildProfilingSamplerWidgetList>b__2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _BuildProfilingSamplerWidgetList_b__2();

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>*& __cordl_internal_get___4__this();

  constexpr TProfileId const& __cordl_internal_get_samplerId() const;

  constexpr TProfileId& __cordl_internal_get_samplerId();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* value);

  constexpr void __cordl_internal_set_samplerId(TProfileId value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayStats_1___c__DisplayClass19_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass19_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayStats_1___c__DisplayClass19_1(DebugDisplayStats_1___c__DisplayClass19_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass19_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayStats_1___c__DisplayClass19_1(DebugDisplayStats_1___c__DisplayClass19_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11943 };

  /// @brief Field samplerId, offset: 0x10, size: 0x8, def value: None
  TProfileId ___samplerId;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1/<>c__DisplayClass19_2<TProfileId>
class CORDL_TYPE DebugDisplayStats_1___c__DisplayClass19_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* CS$__8__locals1;

  /// @brief Field sampler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sampler, put = __cordl_internal_set_sampler)) ::UnityEngine::Rendering::ProfilingSampler* sampler;

  static inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>* New_ctor();

  /// @brief Method <BuildProfilingSamplerWidgetList>b__3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Value* _BuildProfilingSamplerWidgetList_b__3(::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> e);

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_sampler();

  constexpr void __cordl_internal_set_CS$__8__locals1(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* value);

  constexpr void __cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayStats_1___c__DisplayClass19_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass19_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayStats_1___c__DisplayClass19_2(DebugDisplayStats_1___c__DisplayClass19_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass19_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayStats_1___c__DisplayClass19_2(DebugDisplayStats_1___c__DisplayClass19_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11944 };

  /// @brief Field sampler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___sampler;

  /// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1/<>c__DisplayClass6_0<TProfileId>
class CORDL_TYPE DebugDisplayStats_1___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0)) ::System::Func_2<::System::Reflection::MemberInfo*, bool>* __9__0;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>* New_ctor();

  /// @brief Method <GetProfilerIdsToDisplay>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetProfilerIdsToDisplay_b__0(::System::Reflection::MemberInfo* m);

  constexpr ::System::Func_2<::System::Reflection::MemberInfo*, bool>* const& __cordl_internal_get___9__0() const;

  constexpr ::System::Func_2<::System::Reflection::MemberInfo*, bool>*& __cordl_internal_get___9__0();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::System::Reflection::MemberInfo*, bool>* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayStats_1___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayStats_1___c__DisplayClass6_0(DebugDisplayStats_1___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayStats_1___c__DisplayClass6_0(DebugDisplayStats_1___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11945 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::System::Reflection::MemberInfo*, bool>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename TProfileId>
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplayStats`1<TProfileId>
class CORDL_TYPE DebugDisplayStats_1 : public ::System::Object {
public:
  // Declarations
  using AccumulatedTiming = ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>;

  using DebugProfilingType = ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId>;

  using __c__DisplayClass19_0 = ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0<TProfileId>;

  using __c__DisplayClass19_1 = ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1<TProfileId>;

  using __c__DisplayClass19_2 = ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2<TProfileId>;

  using __c__DisplayClass6_0 = ::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0<TProfileId>;

  /// @brief Field averageProfilerTimingsOverASecond, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_averageProfilerTimingsOverASecond, put = __cordl_internal_set_averageProfilerTimingsOverASecond)) bool averageProfilerTimingsOverASecond;

  /// @brief Field hideEmptyScopes, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_hideEmptyScopes, put = __cordl_internal_set_hideEmptyScopes)) bool hideEmptyScopes;

  /// @brief Field k_DetailedStatsColumnLabels, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DetailedStatsColumnLabels, put = setStaticF_k_DetailedStatsColumnLabels)) ::ArrayW<::StringW, ::Array<::StringW>*> k_DetailedStatsColumnLabels;

  /// @brief Field m_AccumulatedFrames, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AccumulatedFrames, put = __cordl_internal_set_m_AccumulatedFrames)) int32_t m_AccumulatedFrames;

  /// @brief Field m_AccumulatedTiming, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AccumulatedTiming, put = __cordl_internal_set_m_AccumulatedTiming)) ::ArrayW<
      ::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
      ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*>
      m_AccumulatedTiming;

  /// @brief Field m_HiddenProfileIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HiddenProfileIds, put = __cordl_internal_set_m_HiddenProfileIds)) ::System::Collections::Generic::HashSet_1<TProfileId>* m_HiddenProfileIds;

  /// @brief Field m_TimeSinceLastAvgValue, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TimeSinceLastAvgValue, put = __cordl_internal_set_m_TimeSinceLastAvgValue)) float_t m_TimeSinceLastAvgValue;

  /// @brief Method BuildDetailedStatsList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Widget* BuildDetailedStatsList(::StringW title, ::System::Collections::Generic::List_1<TProfileId>* samplers);

  /// @brief Method BuildProfilingSamplerWidgetList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::DebugUI_Widget*>* BuildProfilingSamplerWidgetList(::System::Collections::Generic::IEnumerable_1<TProfileId>* samplers);

  /// @brief Method DisableProfilingRecorders, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void DisableProfilingRecorders();

  /// @brief Method EnableProfilingRecorders, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EnableProfilingRecorders();

  /// @brief Method GetProfilerIdsToDisplay, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<TProfileId>* GetProfilerIdsToDisplay();

  /// @brief Method GetSamplerTiming, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline float_t GetSamplerTiming(TProfileId samplerId, ::UnityEngine::Rendering::ProfilingSampler* sampler, ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> type);

  static inline ::UnityEngine::Rendering::DebugDisplayStats_1<TProfileId>* New_ctor();

  /// @brief Method RegisterDebugUI, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterDebugUI(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* list);

  /// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateDetailedStats, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateDetailedStats(::System::Collections::Generic::List_1<TProfileId>* samplers);

  /// @brief Method UpdateListOfAveragedProfilerTimings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateListOfAveragedProfilerTimings(bool needUpdatingAverages, ::System::Collections::Generic::List_1<TProfileId>* samplers);

  /// @brief Method <BuildProfilingSamplerWidgetList>g__CreateWidgetForSampler|19_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Value* _BuildProfilingSamplerWidgetList_g__CreateWidgetForSampler_19_0(TProfileId samplerId, ::UnityEngine::Rendering::ProfilingSampler* sampler,
                                                                                                                  ::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType<TProfileId> type);

  constexpr bool const& __cordl_internal_get_averageProfilerTimingsOverASecond() const;

  constexpr bool& __cordl_internal_get_averageProfilerTimingsOverASecond();

  constexpr bool const& __cordl_internal_get_hideEmptyScopes() const;

  constexpr bool& __cordl_internal_get_hideEmptyScopes();

  constexpr int32_t const& __cordl_internal_get_m_AccumulatedFrames() const;

  constexpr int32_t& __cordl_internal_get_m_AccumulatedFrames();

  constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
                     ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*> const&
  __cordl_internal_get_m_AccumulatedTiming() const;

  constexpr ::ArrayW<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
                     ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*>&
  __cordl_internal_get_m_AccumulatedTiming();

  constexpr ::System::Collections::Generic::HashSet_1<TProfileId>* const& __cordl_internal_get_m_HiddenProfileIds() const;

  constexpr ::System::Collections::Generic::HashSet_1<TProfileId>*& __cordl_internal_get_m_HiddenProfileIds();

  constexpr float_t const& __cordl_internal_get_m_TimeSinceLastAvgValue() const;

  constexpr float_t& __cordl_internal_get_m_TimeSinceLastAvgValue();

  constexpr void __cordl_internal_set_averageProfilerTimingsOverASecond(bool value);

  constexpr void __cordl_internal_set_hideEmptyScopes(bool value);

  constexpr void __cordl_internal_set_m_AccumulatedFrames(int32_t value);

  constexpr void
  __cordl_internal_set_m_AccumulatedTiming(::ArrayW<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
                                                    ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*>
                                               value);

  constexpr void __cordl_internal_set_m_HiddenProfileIds(::System::Collections::Generic::HashSet_1<TProfileId>* value);

  constexpr void __cordl_internal_set_m_TimeSinceLastAvgValue(float_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_DetailedStatsColumnLabels();

  static inline void setStaticF_k_DetailedStatsColumnLabels(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplayStats_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplayStats_1(DebugDisplayStats_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplayStats_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplayStats_1(DebugDisplayStats_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11946 };

  /// @brief Field k_AccumulationTimeInSeconds offset 0xffffffff size 0x4
  static constexpr float_t k_AccumulationTimeInSeconds{ static_cast<float_t>(1.0f) };

  /// @brief Field m_AccumulatedTiming, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*,
           ::Array<::System::Collections::Generic::Dictionary_2<TProfileId, ::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming<TProfileId>*>*>*>
      ___m_AccumulatedTiming;

  /// @brief Field m_TimeSinceLastAvgValue, offset: 0x18, size: 0x4, def value: None
  float_t ___m_TimeSinceLastAvgValue;

  /// @brief Field m_AccumulatedFrames, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_AccumulatedFrames;

  /// @brief Field m_HiddenProfileIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<TProfileId>* ___m_HiddenProfileIds;

  /// @brief Field averageProfilerTimingsOverASecond, offset: 0x28, size: 0x1, def value: None
  bool ___averageProfilerTimingsOverASecond;

  /// @brief Field hideEmptyScopes, offset: 0x29, size: 0x1, def value: None
  bool ___hideEmptyScopes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::DebugDisplayStats_1_DebugProfilingType, "UnityEngine.Rendering", "DebugDisplayStats`1/DebugProfilingType");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplayStats_1, "UnityEngine.Rendering", "DebugDisplayStats`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplayStats_1_AccumulatedTiming, "UnityEngine.Rendering", "DebugDisplayStats`1/AccumulatedTiming");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_0, "UnityEngine.Rendering", "DebugDisplayStats`1/<>c__DisplayClass19_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_1, "UnityEngine.Rendering", "DebugDisplayStats`1/<>c__DisplayClass19_1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass19_2, "UnityEngine.Rendering", "DebugDisplayStats`1/<>c__DisplayClass19_2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DebugDisplayStats_1___c__DisplayClass6_0, "UnityEngine.Rendering", "DebugDisplayStats`1/<>c__DisplayClass6_0");
