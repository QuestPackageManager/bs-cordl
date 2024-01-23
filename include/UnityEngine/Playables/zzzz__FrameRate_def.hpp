#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameRate)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct FrameRate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::FrameRate);
// Type: UnityEngine.Playables::FrameRate
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10420))
// CS Name: ::UnityEngine.Playables::FrameRate
struct CORDL_TYPE FrameRate {
public:
  // Declarations
  /// @brief Field k_24Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_24Fps, put = setStaticF_k_24Fps))::UnityEngine::Playables::FrameRate k_24Fps;

  /// @brief Field k_23_976Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_23_976Fps, put = setStaticF_k_23_976Fps))::UnityEngine::Playables::FrameRate k_23_976Fps;

  /// @brief Field k_25Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_25Fps, put = setStaticF_k_25Fps))::UnityEngine::Playables::FrameRate k_25Fps;

  /// @brief Field k_30Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_30Fps, put = setStaticF_k_30Fps))::UnityEngine::Playables::FrameRate k_30Fps;

  /// @brief Field k_29_97Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_29_97Fps, put = setStaticF_k_29_97Fps))::UnityEngine::Playables::FrameRate k_29_97Fps;

  /// @brief Field k_50Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_50Fps, put = setStaticF_k_50Fps))::UnityEngine::Playables::FrameRate k_50Fps;

  /// @brief Field k_60Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_60Fps, put = setStaticF_k_60Fps))::UnityEngine::Playables::FrameRate k_60Fps;

  /// @brief Field k_59_94Fps, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_k_59_94Fps, put = setStaticF_k_59_94Fps))::UnityEngine::Playables::FrameRate k_59_94Fps;

  __declspec(property(get = get_dropFrame)) bool dropFrame;

  __declspec(property(get = get_rate)) double_t rate;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::FrameRate>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::FrameRate>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::FrameRate>* i___System__IEquatable_1___UnityEngine__Playables__FrameRate_();

  static inline void setStaticF_k_24Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_24Fps();

  static inline void setStaticF_k_23_976Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_23_976Fps();

  static inline void setStaticF_k_25Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_25Fps();

  static inline void setStaticF_k_30Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_30Fps();

  static inline void setStaticF_k_29_97Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_29_97Fps();

  static inline void setStaticF_k_50Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_50Fps();

  static inline void setStaticF_k_60Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_60Fps();

  static inline void setStaticF_k_59_94Fps(::UnityEngine::Playables::FrameRate value);

  static inline ::UnityEngine::Playables::FrameRate getStaticF_k_59_94Fps();

  /// @brief Method get_dropFrame, addr 0x2cf5434, size 0xc, virtual false, abstract: false, final false
  inline bool get_dropFrame();

  /// @brief Method get_rate, addr 0x2cf5440, size 0x28, virtual false, abstract: false, final false
  inline double_t get_rate();

  /// @brief Method .ctor, addr 0x2cf5468, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t frameRate, bool drop);

  /// @brief Method IsValid, addr 0x2cf5480, size 0x10, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method Equals, addr 0x2cf5490, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::FrameRate other);

  /// @brief Method Equals, addr 0x2cf54a0, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method op_Equality, addr 0x2cf5518, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Playables::FrameRate a, ::UnityEngine::Playables::FrameRate b);

  /// @brief Method GetHashCode, addr 0x2cf5524, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x2cf552c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x2cf5538, size 0x194, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method DoubleToFrameRate, addr 0x2cf56cc, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::FrameRate DoubleToFrameRate(double_t framerate);

  // Ctor Parameters [CppParam { name: "m_Rate", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FrameRate(int32_t m_Rate) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FrameRate();

  /// @brief Field m_Rate, offset: 0x0, size: 0x4, def value: None
  int32_t m_Rate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::FrameRate, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameRate, m_Rate) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::FrameRate, "UnityEngine.Playables", "FrameRate");
