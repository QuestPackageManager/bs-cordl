#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceReport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceReport)
namespace GlobalNamespace {
template <typename T> class Cvar_1;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PerformanceReport_FloatMetrics;
}
namespace GlobalNamespace {
class PerformanceReport_LongMetrics;
}
namespace GlobalNamespace {
template <typename T> class PerformanceReport_Metrics_1;
}
namespace GlobalNamespace {
class PerformanceReport_Metrics;
}
namespace GlobalNamespace {
class PerformanceReport___c;
}
namespace GlobalNamespace {
class PerformanceReport___c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
struct DateTime;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceReport;
}
namespace GlobalNamespace {
class PerformanceReport_FloatMetrics;
}
namespace GlobalNamespace {
class PerformanceReport_LongMetrics;
}
namespace GlobalNamespace {
class PerformanceReport_Metrics;
}
namespace GlobalNamespace {
template <typename T> class PerformanceReport_Metrics_1;
}
namespace GlobalNamespace {
class PerformanceReport___c;
}
namespace GlobalNamespace {
class PerformanceReport___c__DisplayClass7_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PerformanceReport*);
MARK_REF_T(::GlobalNamespace::PerformanceReport_FloatMetrics*);
MARK_REF_T(::GlobalNamespace::PerformanceReport_LongMetrics*);
MARK_REF_T(::GlobalNamespace::PerformanceReport_Metrics*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::PerformanceReport_Metrics_1);
MARK_REF_T(::GlobalNamespace::PerformanceReport___c*);
MARK_REF_T(::GlobalNamespace::PerformanceReport___c__DisplayClass7_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceReport*, "", "PerformanceReport");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceReport_FloatMetrics*, "", "PerformanceReport/FloatMetrics");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceReport_LongMetrics*, "", "PerformanceReport/LongMetrics");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceReport_Metrics*, "", "PerformanceReport/Metrics");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::PerformanceReport_Metrics_1, "", "PerformanceReport/Metrics`1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceReport___c*, "", "PerformanceReport/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerformanceReport___c__DisplayClass7_0*, "", "PerformanceReport/<>c__DisplayClass7_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceReport/Metrics
class CORDL_TYPE PerformanceReport_Metrics : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetValue(int32_t index);

  static inline ::GlobalNamespace::PerformanceReport_Metrics* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr void __cordl_internal_set_Name(::StringW value);

  /// @brief Method .ctor, addr 0x5d4b558, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport_Metrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_Metrics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport_Metrics(PerformanceReport_Metrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_Metrics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport_Metrics(PerformanceReport_Metrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6737 };

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceReport_Metrics, ___Name) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerformanceReport_Metrics) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PerformanceReport::Metrics
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: PerformanceReport/Metrics`1<T>
class CORDL_TYPE PerformanceReport_Metrics_1 : public ::GlobalNamespace::PerformanceReport_Metrics {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field Values, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Values, put = __cordl_internal_set_Values)) ::ArrayW<T> Values;

  static inline ::GlobalNamespace::PerformanceReport_Metrics_1<T>* New_ctor();

  constexpr ::ArrayW<T> const& __cordl_internal_get_Values() const;

  constexpr ::ArrayW<T>& __cordl_internal_get_Values();

  constexpr void __cordl_internal_set_Values(::ArrayW<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport_Metrics_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_Metrics_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport_Metrics_1(PerformanceReport_Metrics_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_Metrics_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport_Metrics_1(PerformanceReport_Metrics_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6738 };

  /// @brief Field Values, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<T> ___Values;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies PerformanceReport::Metrics`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceReport/FloatMetrics
class CORDL_TYPE PerformanceReport_FloatMetrics : public ::GlobalNamespace::PerformanceReport_Metrics_1<float_t> {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x5d4b55c, size 0x94, virtual true, abstract: false, final false
  inline ::StringW GetValue(int32_t index);

  static inline ::GlobalNamespace::PerformanceReport_FloatMetrics* New_ctor();

  /// @brief Method .ctor, addr 0x5d4a1f8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport_FloatMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_FloatMetrics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport_FloatMetrics(PerformanceReport_FloatMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_FloatMetrics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport_FloatMetrics(PerformanceReport_FloatMetrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6739 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerformanceReport_FloatMetrics) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PerformanceReport::Metrics`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceReport/LongMetrics
class CORDL_TYPE PerformanceReport_LongMetrics : public ::GlobalNamespace::PerformanceReport_Metrics_1<int64_t> {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x5d4b5f0, size 0x7c, virtual true, abstract: false, final false
  inline ::StringW GetValue(int32_t index);

  static inline ::GlobalNamespace::PerformanceReport_LongMetrics* New_ctor();

  /// @brief Method .ctor, addr 0x5d4b66c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport_LongMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_LongMetrics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport_LongMetrics(PerformanceReport_LongMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport_LongMetrics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport_LongMetrics(PerformanceReport_LongMetrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerformanceReport_LongMetrics) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceReport/<>c
class CORDL_TYPE PerformanceReport___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PerformanceReport___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0,
                      put = setStaticF___9__8_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>* __9__8_0;

  /// @brief Field <>9__8_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_1,
                      put = setStaticF___9__8_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>* __9__8_1;

  /// @brief Field <>9__8_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_2,
                      put = setStaticF___9__8_2)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>* __9__8_2;

  /// @brief Field <>9__8_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_3, put = setStaticF___9__8_3)) ::System::Func_2<::StringW, ::StringW>* __9__8_3;

  static inline ::GlobalNamespace::PerformanceReport___c* New_ctor();

  /// @brief Method <ListCvars>b__8_0, addr 0x5d4b700, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW _ListCvars_b__8_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*> cvar);

  /// @brief Method <ListCvars>b__8_1, addr 0x5d4b81c, size 0x1b0, virtual false, abstract: false, final false
  inline ::StringW _ListCvars_b__8_1(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*> cvar);

  /// @brief Method <ListCvars>b__8_2, addr 0x5d4b9cc, size 0x11c, virtual false, abstract: false, final false
  inline ::StringW _ListCvars_b__8_2(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*> cvar);

  /// @brief Method <ListCvars>b__8_3, addr 0x5d4bae8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ListCvars_b__8_3(::StringW s);

  /// @brief Method .ctor, addr 0x5d4b6fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PerformanceReport___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>* getStaticF___9__8_0();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>* getStaticF___9__8_1();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>* getStaticF___9__8_2();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__8_3();

  static inline void setStaticF___9(::GlobalNamespace::PerformanceReport___c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<bool>*>, ::StringW>* value);

  static inline void setStaticF___9__8_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<float_t>*>, ::StringW>* value);

  static inline void setStaticF___9__8_2(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::Cvar_1<int32_t>*>, ::StringW>* value);

  static inline void setStaticF___9__8_3(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport___c(PerformanceReport___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport___c(PerformanceReport___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerformanceReport___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceReport/<>c__DisplayClass7_0
class CORDL_TYPE PerformanceReport___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field frameCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_frameCount, put = __cordl_internal_set_frameCount)) int32_t frameCount;

  static inline ::GlobalNamespace::PerformanceReport___c__DisplayClass7_0* New_ctor();

  /// @brief Method <ListMetrics>b__0, addr 0x5d4baf0, size 0x38, virtual false, abstract: false, final false
  inline bool _ListMetrics_b__0(::GlobalNamespace::PerformanceReport_Metrics* m);

  constexpr int32_t const& __cordl_internal_get_frameCount() const;

  constexpr int32_t& __cordl_internal_get_frameCount();

  constexpr void __cordl_internal_set_frameCount(int32_t value);

  /// @brief Method .ctor, addr 0x5d4b554, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport___c__DisplayClass7_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport___c__DisplayClass7_0(PerformanceReport___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport___c__DisplayClass7_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport___c__DisplayClass7_0(PerformanceReport___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6742 };

  /// @brief Field frameCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___frameCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerformanceReport___c__DisplayClass7_0, ___frameCount) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerformanceReport___c__DisplayClass7_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceReport
class CORDL_TYPE PerformanceReport : public ::System::Object {
public:
  // Declarations
  using FloatMetrics = ::GlobalNamespace::PerformanceReport_FloatMetrics;

  using LongMetrics = ::GlobalNamespace::PerformanceReport_LongMetrics;

  using Metrics = ::GlobalNamespace::PerformanceReport_Metrics;

  template <typename T> using Metrics_1 = ::GlobalNamespace::PerformanceReport_Metrics_1<T>;

  using __c = ::GlobalNamespace::PerformanceReport___c;

  using __c__DisplayClass7_0 = ::GlobalNamespace::PerformanceReport___c__DisplayClass7_0;

  /// @brief Method CreateReportDescriptor, addr 0x5d4b43c, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW CreateReportDescriptor(::StringW tag, ::StringW environmentName, ::StringW levelId, ::StringW difficulty, ::StringW characteristic);

  /// @brief Method CreateReportDescriptor, addr 0x5d4b384, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW CreateReportDescriptor(::StringW tag, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData);

  /// @brief Method CreateTimestamp, addr 0x5d4abd4, size 0x7c, virtual false, abstract: false, final false
  static inline ::StringW CreateTimestamp(::System::DateTime timestamp);

  /// @brief Method ListCvars, addr 0x5d4a524, size 0x6b0, virtual false, abstract: false, final false
  static inline ::StringW ListCvars(bool includeHeader);

  /// @brief Method ListMetrics, addr 0x5d4a234, size 0x2f0, virtual false, abstract: false, final false
  static inline ::StringW ListMetrics(bool includeHeader, /* [ParamArray] */ ::ArrayW<::GlobalNamespace::PerformanceReport_Metrics*> metrics);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport(PerformanceReport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport(PerformanceReport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6743 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PerformanceReport) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
