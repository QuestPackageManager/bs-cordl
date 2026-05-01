#pragma once
// IWYU pragma private; include "System/Resources/IResourceGroveler.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/Threading/zzzz__StackCrawlMark_def.hpp"
//  Writing Method size for method: ::System::Resources::IResourceGroveler.GrovelForResourceSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::ResourceSet* (
    ::System::Resources::IResourceGroveler::*)(::System::Globalization::CultureInfo*, ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>*, bool, bool,
                                               ::ByRef<::System::Threading::StackCrawlMark>)>(&::System::Resources::IResourceGroveler::GrovelForResourceSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::IResourceGroveler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::IResourceGroveler*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Resources::ResourceSet*
System::Resources::IResourceGroveler::GrovelForResourceSet(::System::Globalization::CultureInfo* culture,
                                                           ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Resources::ResourceSet*>* localResourceSets, bool tryParents,
                                                           bool createIfNotExists, ::ByRef<::System::Threading::StackCrawlMark> stackMark) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::IResourceGroveler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Resources::ResourceSet*, false>(this, ___internal_method, culture, localResourceSets, tryParents, createIfNotExists, stackMark);
}
