#ifndef PSEUDO_POWER_SPECTRUM_HEALPIX_IO_HPP
#define PSEUDO_POWER_SPECTRUM_HEALPIX_IO_HPP

namespace pseudo_power_spectrum
{
    /**
     * \class healpix_map_io
     *
     * \brief A class for reading and writing HEALPix maps
     *
     * \tparam _real_matrix_type real matrix type
     *
     * This class contains methods for reading and writing HEALPix maps.
     * The maps are read into a matrix. Each row corresponds to a field in the
     * input fits file.
     */
    template<class _real_matrix_type>
    class healpix_map_io
    {
        typedef _real_matrix_type real_matrix_type;

        real_matrix_type read_mp_from_fits()
        {

        }
    };
}

#endif //PSEUDO_POWER_SPECTRUM_HEALPIX_IO_HPP
