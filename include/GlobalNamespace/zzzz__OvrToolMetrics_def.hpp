#pragma once
// IWYU pragma private; include "GlobalNamespace/OvrToolMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OvrToolMetrics)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OvrToolMetrics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OvrToolMetrics);
// Dependencies System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OvrToolMetrics
class CORDL_TYPE OvrToolMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _metrics, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__metrics, put = __cordl_internal_set__metrics)) ::ArrayW<::StringW, ::Array<::StringW>*> _metrics;

  /// @brief Field _sample, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sample, put = __cordl_internal_set__sample)) ::ArrayW<int64_t, ::Array<int64_t>*> _sample;

  /// @brief Field _samples, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__samples, put = __cordl_internal_set__samples)) ::System::Collections::Generic::List_1<int64_t>* _samples;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CaptureFrame, addr 0x3b236dc, size 0x54, virtual false, abstract: false, final false
  inline void CaptureFrame();

  /// @brief Method Dispose, addr 0x3b236d8, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GenerateListReport, addr 0x3b23730, size 0x18c, virtual false, abstract: false, final false
  inline ::StringW GenerateListReport();

  /// @brief Method GenerateTableReport, addr 0x3b238bc, size 0x1cc, virtual false, abstract: false, final false
  inline ::StringW GenerateTableReport();

  static inline ::GlobalNamespace::OvrToolMetrics* New_ctor();

  /// @brief Method RecordMetrics, addr 0x3b236d0, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OvrToolMetrics* RecordMetrics(int32_t initialFrameCapacity);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__metrics() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__metrics();

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__sample() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__sample();

  constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get__samples() const;

  constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get__samples();

  constexpr void __cordl_internal_set__metrics(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__sample(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set__samples(::System::Collections::Generic::List_1<int64_t>* value);

  /// @brief Method .ctor, addr 0x3b23a88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OvrToolMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OvrToolMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OvrToolMetrics(OvrToolMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OvrToolMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OvrToolMetrics(OvrToolMetrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5112 };

  /// @brief Field _metrics, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____metrics;

  /// @brief Field _sample, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____sample;

  /// @brief Field _samples, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int64_t>* ____samples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OvrToolMetrics, ____metrics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OvrToolMetrics, ____sample) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OvrToolMetrics, ____samples) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OvrToolMetrics, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OvrToolMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrToolMetrics*, "", "OvrToolMetrics");
