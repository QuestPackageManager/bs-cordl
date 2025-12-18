#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusMetrics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusMetrics)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusMetrics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusMetrics);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusMetrics
class CORDL_TYPE OculusMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Field _metrics, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__metrics, put = __cordl_internal_set__metrics)) ::ArrayW<::StringW, ::Array<::StringW>*> _metrics;

  /// @brief Field _sample, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sample, put = __cordl_internal_set__sample)) ::ArrayW<float_t, ::Array<float_t>*> _sample;

  /// @brief Field _samples, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__samples, put = __cordl_internal_set__samples)) ::System::Collections::Generic::List_1<float_t>* _samples;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CaptureFrame, addr 0x575be14, size 0x4, virtual false, abstract: false, final false
  inline void CaptureFrame();

  /// @brief Method Dispose, addr 0x575be10, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GenerateListReport, addr 0x575be18, size 0x19c, virtual false, abstract: false, final false
  inline ::StringW GenerateListReport();

  /// @brief Method GenerateTableReport, addr 0x575bfb4, size 0x1ec, virtual false, abstract: false, final false
  inline ::StringW GenerateTableReport();

  static inline ::GlobalNamespace::OculusMetrics* New_ctor(int32_t initialFrameCapacity);

  /// @brief Method RecordMetrics, addr 0x575bce4, size 0x40, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OculusMetrics* RecordMetrics(int32_t initialFrameCapacity);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__metrics() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__metrics();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__sample() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__sample();

  constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get__samples() const;

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get__samples();

  constexpr void __cordl_internal_set__metrics(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__sample(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set__samples(::System::Collections::Generic::List_1<float_t>* value);

  /// @brief Method .ctor, addr 0x575bd24, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialFrameCapacity);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusMetrics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusMetrics(OculusMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusMetrics(OculusMetrics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6682 };

  /// @brief Field _metrics, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____metrics;

  /// @brief Field _sample, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____sample;

  /// @brief Field _samples, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ____samples;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusMetrics, ____metrics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMetrics, ____sample) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMetrics, ____samples) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusMetrics, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusMetrics*, "", "OculusMetrics");
